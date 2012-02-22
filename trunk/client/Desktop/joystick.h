#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <QObject>
#include "SDL/SDL_joystick.h"
#include <QThread>
#include <QStringList>

class JoystickAdapter : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(JoystickAdapter)

public:
    enum HatPosition
    {
        JOYSTICK_HAT_CENTERED = SDL_HAT_DOWN,
        JOYSTICK_HAT_UP = SDL_HAT_UP,
        JOYSTICK_HAT_UP_RIGHT = SDL_HAT_RIGHT,
        JOYSTICK_HAT_RIGHT = SDL_HAT_RIGHT,
        JOYSTICK_HAT_RIGHT_DOWN = SDL_HAT_RIGHTDOWN,
        JOYSTICK_HAT_DOWN = SDL_HAT_DOWN,
        JOYSTICK_HAT_DOWN_LEFT = SDL_HAT_LEFTDOWN,
        JOYSTICK_HAT_LEFT = SDL_HAT_LEFT,
        JOYSTICK_HAT_LEFT_UP = SDL_HAT_LEFTUP
    };

public:
    explicit JoystickAdapter(QObject *parent = 0);
    ~JoystickAdapter();

    bool open(int id);
    void close();
    bool isConnected() const
    {
        return m_joystick ? SDL_JoystickOpened(getJoystickId()) : false;
    }

    inline int getJoystickId() const
    {
        return SDL_JoystickIndex(m_joystick);
    }
    inline QString getJoystickName() const
    {
        return QString(SDL_JoystickName(getJoystickId()));
    }
    inline int getJoystickNumAxes() const
    {
        return SDL_JoystickNumAxes(m_joystick);
    }
    inline int getJoystickNumHats() const
    {
        return SDL_JoystickNumHats(m_joystick);
    }
    inline int getJoystickNumBalls() const
    {
        return SDL_JoystickNumBalls(m_joystick);
    }
    inline int getJoystickNumButtons() const
    {
        return SDL_JoystickNumButtons(m_joystick);
    }

    static int getNumAvaliableJoystick();
    static QStringList getAvaliableJoystickName();

signals:
    void sigButtonChanged(int id, bool state);
    void sigAxisChanged(int id, int state);
    void sigHatCanged(int id, int state);
    void sigBallChanged(int id, int stateX, int stateY);

private:
    class               JoystickThread;

    SDL_Joystick*       m_joystick;
    JoystickThread*    m_joystickThread;
};

class JoystickAdapter::JoystickThread : public QThread
{
    Q_OBJECT

public:
    inline JoystickThread(JoystickAdapter* adapter) : m_adapter(adapter) { }

protected:
    virtual void run();

private:
    JoystickAdapter *m_adapter;
};

#endif // JOYSTICK_H
