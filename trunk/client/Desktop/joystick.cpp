#include "joystick.h"

#include "SDL/SDL.h"

JoystickAdapter::JoystickAdapter(QObject *parent) :
    QObject(parent),
    m_joystick(0)
{
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK);
    SDL_JoystickEventState(SDL_ENABLE);
    m_joystickThread = new JoystickThread(this);
}

JoystickAdapter::~JoystickAdapter()
{
    if(isConnected()) close();
    delete m_joystickThread;
    SDL_JoystickEventState(SDL_DISABLE);
    SDL_Quit();
}

bool JoystickAdapter::open(int id)
{
    Q_ASSERT(!m_joystick);

    if(SDL_JoystickOpened(id))
        return false;
    m_joystick = SDL_JoystickOpen(id);
    if(SDL_JoystickOpened(id))
    {
        m_joystickThread->start();
    }
    else
        m_joystick = 0;
    return m_joystick;
}

void JoystickAdapter::close()
{
    if(m_joystick)
    {
        SDL_Event closeEvent;

        closeEvent.type = SDL_QUIT;
        SDL_PushEvent(&closeEvent);

        m_joystickThread->wait();
        SDL_JoystickClose(m_joystick);
        m_joystick = 0;
    }
}

void JoystickAdapter::JoystickThread::run()
{
    SDL_Event joyEvent;
    bool running = true;

    while(running)
    {
        SDL_WaitEvent(&joyEvent);

        if(joyEvent.type == SDL_QUIT)
            running = false;
        else if(joyEvent.jbutton.which == m_adapter->getJoystickId())
        {
            switch(joyEvent.type)
            {
            case SDL_JOYAXISMOTION:
                emit m_adapter->sigAxisChanged(joyEvent.jaxis.axis,joyEvent.jaxis.value);
                break;

            case SDL_JOYHATMOTION:
                emit m_adapter->sigHatCanged(joyEvent.jhat.hat, joyEvent.jhat.value);
                break;

            case SDL_JOYBALLMOTION:
                emit m_adapter->sigBallChanged(joyEvent.jball.ball, joyEvent.jball.xrel, joyEvent.jball.yrel);
                break;

            case SDL_JOYBUTTONDOWN:
            case SDL_JOYBUTTONUP:
                emit m_adapter->sigButtonChanged(joyEvent.jbutton.button, joyEvent.jbutton.state);
                break;
            }
        }
    }
}

int JoystickAdapter::getNumAvaliableJoystick()
{
    SDL_JoystickUpdate();
    return SDL_NumJoysticks();
}

QStringList JoystickAdapter::getAvaliableJoystickName()
{
    QStringList joyNames;

    int joyNum = getNumAvaliableJoystick();

    for(int i = 0; i < joyNum; ++i)
        joyNames.push_front(QString(SDL_JoystickName(i)));

    return joyNames;
}


