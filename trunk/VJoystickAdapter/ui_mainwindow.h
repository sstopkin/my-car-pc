/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 23. Jan 06:28:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_14;
    QComboBox *joystickComboBox;
    QPushButton *connectPushButton;
    QPushButton *disconnectPushButton;
    QPushButton *rescanPushButton;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *joystickStateBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *joystickXaxisLabel;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *joystickXrotationLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *joystickYaxisLabel;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *joystickYrotationLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *joystickZLTaxisLabel;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLabel *joystickPOV0Label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QLabel *joystickZRTaxisLabel;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLabel *joystickButtonsTestLabel;
    QSpacerItem *horizontalSpacer_13;
    QGroupBox *joystickInformationBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_14;
    QLabel *joystickNameLabel;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_24;
    QLabel *joystickIdLabel;
    QSpacerItem *horizontalSpacer_25;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_15;
    QLabel *joystickButtonsLabel;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_16;
    QLabel *joystickAxisLabel;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_17;
    QLabel *joystickHatsLabel;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_18;
    QLabel *joystickBallsLabel;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *exitPushButton;
    QSpacerItem *horizontalSpacer_26;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(694, 388);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_16 = new QHBoxLayout(groupBox);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_16->addWidget(label_14);

        joystickComboBox = new QComboBox(groupBox);
        joystickComboBox->setObjectName(QString::fromUtf8("joystickComboBox"));

        horizontalLayout_16->addWidget(joystickComboBox);

        connectPushButton = new QPushButton(groupBox);
        connectPushButton->setObjectName(QString::fromUtf8("connectPushButton"));

        horizontalLayout_16->addWidget(connectPushButton);

        disconnectPushButton = new QPushButton(groupBox);
        disconnectPushButton->setObjectName(QString::fromUtf8("disconnectPushButton"));

        horizontalLayout_16->addWidget(disconnectPushButton);

        rescanPushButton = new QPushButton(groupBox);
        rescanPushButton->setObjectName(QString::fromUtf8("rescanPushButton"));

        horizontalLayout_16->addWidget(rescanPushButton);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        joystickStateBox = new QGroupBox(centralWidget);
        joystickStateBox->setObjectName(QString::fromUtf8("joystickStateBox"));
        joystickStateBox->setMinimumSize(QSize(320, 216));
        verticalLayout = new QVBoxLayout(joystickStateBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(joystickStateBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        joystickXaxisLabel = new QLabel(joystickStateBox);
        joystickXaxisLabel->setObjectName(QString::fromUtf8("joystickXaxisLabel"));
        joystickXaxisLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_2->addWidget(joystickXaxisLabel);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(20, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(joystickStateBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        joystickXrotationLabel = new QLabel(joystickStateBox);
        joystickXrotationLabel->setObjectName(QString::fromUtf8("joystickXrotationLabel"));
        joystickXrotationLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_4->addWidget(joystickXrotationLabel);


        gridLayout->addLayout(horizontalLayout_4, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(joystickStateBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        joystickYaxisLabel = new QLabel(joystickStateBox);
        joystickYaxisLabel->setObjectName(QString::fromUtf8("joystickYaxisLabel"));
        joystickYaxisLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout->addWidget(joystickYaxisLabel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(20, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(joystickStateBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        joystickYrotationLabel = new QLabel(joystickStateBox);
        joystickYrotationLabel->setObjectName(QString::fromUtf8("joystickYrotationLabel"));
        joystickYrotationLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_3->addWidget(joystickYrotationLabel);


        gridLayout->addLayout(horizontalLayout_3, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(joystickStateBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        joystickZLTaxisLabel = new QLabel(joystickStateBox);
        joystickZLTaxisLabel->setObjectName(QString::fromUtf8("joystickZLTaxisLabel"));
        joystickZLTaxisLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_6->addWidget(joystickZLTaxisLabel);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(20, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 2, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(joystickStateBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        joystickPOV0Label = new QLabel(joystickStateBox);
        joystickPOV0Label->setObjectName(QString::fromUtf8("joystickPOV0Label"));
        joystickPOV0Label->setMinimumSize(QSize(40, 0));

        horizontalLayout_7->addWidget(joystickPOV0Label);


        gridLayout->addLayout(horizontalLayout_7, 2, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(joystickStateBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        joystickZRTaxisLabel = new QLabel(joystickStateBox);
        joystickZRTaxisLabel->setObjectName(QString::fromUtf8("joystickZRTaxisLabel"));
        joystickZRTaxisLabel->setMinimumSize(QSize(40, 0));

        horizontalLayout_5->addWidget(joystickZRTaxisLabel);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(20, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(joystickStateBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        joystickButtonsTestLabel = new QLabel(joystickStateBox);
        joystickButtonsTestLabel->setObjectName(QString::fromUtf8("joystickButtonsTestLabel"));

        horizontalLayout_8->addWidget(joystickButtonsTestLabel);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_8);


        horizontalLayout_9->addWidget(joystickStateBox);

        joystickInformationBox = new QGroupBox(centralWidget);
        joystickInformationBox->setObjectName(QString::fromUtf8("joystickInformationBox"));
        joystickInformationBox->setMinimumSize(QSize(250, 0));
        verticalLayout_2 = new QVBoxLayout(joystickInformationBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(joystickInformationBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_14 = new QSpacerItem(101, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        joystickNameLabel = new QLabel(joystickInformationBox);
        joystickNameLabel->setObjectName(QString::fromUtf8("joystickNameLabel"));

        horizontalLayout_11->addWidget(joystickNameLabel);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_23);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(joystickInformationBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_17->addWidget(label_15);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_24);

        joystickIdLabel = new QLabel(joystickInformationBox);
        joystickIdLabel->setObjectName(QString::fromUtf8("joystickIdLabel"));

        horizontalLayout_17->addWidget(joystickIdLabel);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_25);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_10 = new QLabel(joystickInformationBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_12->addWidget(label_10);

        horizontalSpacer_15 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_15);

        joystickButtonsLabel = new QLabel(joystickInformationBox);
        joystickButtonsLabel->setObjectName(QString::fromUtf8("joystickButtonsLabel"));
        joystickButtonsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(joystickButtonsLabel);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(joystickInformationBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        horizontalSpacer_16 = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_16);

        joystickAxisLabel = new QLabel(joystickInformationBox);
        joystickAxisLabel->setObjectName(QString::fromUtf8("joystickAxisLabel"));
        joystickAxisLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(joystickAxisLabel);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_21);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(joystickInformationBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_14->addWidget(label_12);

        horizontalSpacer_17 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_17);

        joystickHatsLabel = new QLabel(joystickInformationBox);
        joystickHatsLabel->setObjectName(QString::fromUtf8("joystickHatsLabel"));
        joystickHatsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(joystickHatsLabel);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_20);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_13 = new QLabel(joystickInformationBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_15->addWidget(label_13);

        horizontalSpacer_18 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_18);

        joystickBallsLabel = new QLabel(joystickInformationBox);
        joystickBallsLabel->setObjectName(QString::fromUtf8("joystickBallsLabel"));
        joystickBallsLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(joystickBallsLabel);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_19);


        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_9->addWidget(joystickInformationBox);


        gridLayout_2->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_27 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_27);

        exitPushButton = new QPushButton(centralWidget);
        exitPushButton->setObjectName(QString::fromUtf8("exitPushButton"));
        exitPushButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_10->addWidget(exitPushButton);

        horizontalSpacer_26 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_26);


        gridLayout_2->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 694, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Joystick Input Vizualization", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Input Joystick Id", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Avaliable Joystick:", 0, QApplication::UnicodeUTF8));
        connectPushButton->setText(QApplication::translate("MainWindow", "connect", 0, QApplication::UnicodeUTF8));
        disconnectPushButton->setText(QApplication::translate("MainWindow", "disconnect", 0, QApplication::UnicodeUTF8));
        rescanPushButton->setText(QApplication::translate("MainWindow", "rescan device", 0, QApplication::UnicodeUTF8));
        joystickStateBox->setTitle(QApplication::translate("MainWindow", "Joystick States", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "X Axis:", 0, QApplication::UnicodeUTF8));
        joystickXaxisLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "X Rotation:", 0, QApplication::UnicodeUTF8));
        joystickXrotationLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Y Axis:", 0, QApplication::UnicodeUTF8));
        joystickYaxisLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Y Rotation:", 0, QApplication::UnicodeUTF8));
        joystickYrotationLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Z LT Axis:", 0, QApplication::UnicodeUTF8));
        joystickZLTaxisLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "POV0:", 0, QApplication::UnicodeUTF8));
        joystickPOV0Label->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Z RT Axis:", 0, QApplication::UnicodeUTF8));
        joystickZRTaxisLabel->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Buttons", 0, QApplication::UnicodeUTF8));
        joystickButtonsTestLabel->setText(QString());
        joystickInformationBox->setTitle(QApplication::translate("MainWindow", "Joystick Information", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Joystick Name:", 0, QApplication::UnicodeUTF8));
        joystickNameLabel->setText(QApplication::translate("MainWindow", "Not connected", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Joystick Id:                                     ", 0, QApplication::UnicodeUTF8));
        joystickIdLabel->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Number of Buttons:", 0, QApplication::UnicodeUTF8));
        joystickButtonsLabel->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Number of Axis:            ", 0, QApplication::UnicodeUTF8));
        joystickAxisLabel->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Number of Hats:     ", 0, QApplication::UnicodeUTF8));
        joystickHatsLabel->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Number of Balls:    ", 0, QApplication::UnicodeUTF8));
        joystickBallsLabel->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        exitPushButton->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
