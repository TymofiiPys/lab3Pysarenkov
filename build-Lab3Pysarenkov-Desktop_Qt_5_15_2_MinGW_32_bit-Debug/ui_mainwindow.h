/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playerwindow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open_f;
    QAction *action_2;
    QAction *action_exit;
    QAction *action_aud1;
    QAction *action_aud2;
    QAction *action_aud3;
    QAction *action_aud4;
    QAction *action_aud5;
    QAction *action_aud6;
    QAction *action_aud7;
    QAction *action_aud8;
    QAction *action_aud9;
    QAction *action_aud10;
    QAction *action_vid1;
    QAction *action_vid2;
    QAction *action_vid3;
    QAction *action_vid4;
    QAction *action_vid5;
    QAction *action_vid6;
    QAction *action_vid7;
    QAction *action_vid8;
    QAction *action_vid9;
    QAction *action_vid10;
    QAction *action_sub1;
    QAction *action_sub2;
    QAction *action_sub3;
    QAction *action_sub4;
    QAction *action_sub5;
    QAction *action_sub6;
    QAction *action_sub7;
    QAction *action_sub8;
    QAction *action_sub9;
    QAction *action_sub10;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    playerwindow *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cur;
    QSlider *horizontalSlider;
    QLabel *label_dur;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_play;
    QPushButton *pushButton_stop;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QPushButton *pushButton_mute;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_5;
    QMenu *menu_3;
    QMenu *menu_6;
    QMenu *menu_4;
    QMenu *menu_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(941, 620);
        action_open_f = new QAction(MainWindow);
        action_open_f->setObjectName(QString::fromUtf8("action_open_f"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon);
        action_aud1 = new QAction(MainWindow);
        action_aud1->setObjectName(QString::fromUtf8("action_aud1"));
        action_aud1->setVisible(false);
        action_aud2 = new QAction(MainWindow);
        action_aud2->setObjectName(QString::fromUtf8("action_aud2"));
        action_aud2->setVisible(false);
        action_aud3 = new QAction(MainWindow);
        action_aud3->setObjectName(QString::fromUtf8("action_aud3"));
        action_aud3->setVisible(false);
        action_aud4 = new QAction(MainWindow);
        action_aud4->setObjectName(QString::fromUtf8("action_aud4"));
        action_aud4->setVisible(false);
        action_aud5 = new QAction(MainWindow);
        action_aud5->setObjectName(QString::fromUtf8("action_aud5"));
        action_aud5->setVisible(false);
        action_aud6 = new QAction(MainWindow);
        action_aud6->setObjectName(QString::fromUtf8("action_aud6"));
        action_aud6->setVisible(false);
        action_aud7 = new QAction(MainWindow);
        action_aud7->setObjectName(QString::fromUtf8("action_aud7"));
        action_aud7->setVisible(false);
        action_aud8 = new QAction(MainWindow);
        action_aud8->setObjectName(QString::fromUtf8("action_aud8"));
        action_aud8->setVisible(false);
        action_aud9 = new QAction(MainWindow);
        action_aud9->setObjectName(QString::fromUtf8("action_aud9"));
        action_aud9->setVisible(false);
        action_aud10 = new QAction(MainWindow);
        action_aud10->setObjectName(QString::fromUtf8("action_aud10"));
        action_aud10->setVisible(false);
        action_vid1 = new QAction(MainWindow);
        action_vid1->setObjectName(QString::fromUtf8("action_vid1"));
        action_vid1->setVisible(false);
        action_vid2 = new QAction(MainWindow);
        action_vid2->setObjectName(QString::fromUtf8("action_vid2"));
        action_vid2->setVisible(false);
        action_vid3 = new QAction(MainWindow);
        action_vid3->setObjectName(QString::fromUtf8("action_vid3"));
        action_vid3->setVisible(false);
        action_vid4 = new QAction(MainWindow);
        action_vid4->setObjectName(QString::fromUtf8("action_vid4"));
        action_vid4->setVisible(false);
        action_vid5 = new QAction(MainWindow);
        action_vid5->setObjectName(QString::fromUtf8("action_vid5"));
        action_vid5->setVisible(false);
        action_vid6 = new QAction(MainWindow);
        action_vid6->setObjectName(QString::fromUtf8("action_vid6"));
        action_vid6->setVisible(false);
        action_vid7 = new QAction(MainWindow);
        action_vid7->setObjectName(QString::fromUtf8("action_vid7"));
        action_vid7->setVisible(false);
        action_vid8 = new QAction(MainWindow);
        action_vid8->setObjectName(QString::fromUtf8("action_vid8"));
        action_vid8->setVisible(false);
        action_vid9 = new QAction(MainWindow);
        action_vid9->setObjectName(QString::fromUtf8("action_vid9"));
        action_vid9->setVisible(false);
        action_vid10 = new QAction(MainWindow);
        action_vid10->setObjectName(QString::fromUtf8("action_vid10"));
        action_vid10->setVisible(false);
        action_sub1 = new QAction(MainWindow);
        action_sub1->setObjectName(QString::fromUtf8("action_sub1"));
        action_sub1->setVisible(false);
        action_sub2 = new QAction(MainWindow);
        action_sub2->setObjectName(QString::fromUtf8("action_sub2"));
        action_sub2->setVisible(false);
        action_sub3 = new QAction(MainWindow);
        action_sub3->setObjectName(QString::fromUtf8("action_sub3"));
        action_sub3->setVisible(false);
        action_sub4 = new QAction(MainWindow);
        action_sub4->setObjectName(QString::fromUtf8("action_sub4"));
        action_sub4->setVisible(false);
        action_sub5 = new QAction(MainWindow);
        action_sub5->setObjectName(QString::fromUtf8("action_sub5"));
        action_sub5->setVisible(false);
        action_sub6 = new QAction(MainWindow);
        action_sub6->setObjectName(QString::fromUtf8("action_sub6"));
        action_sub6->setVisible(false);
        action_sub7 = new QAction(MainWindow);
        action_sub7->setObjectName(QString::fromUtf8("action_sub7"));
        action_sub7->setVisible(false);
        action_sub8 = new QAction(MainWindow);
        action_sub8->setObjectName(QString::fromUtf8("action_sub8"));
        action_sub8->setVisible(false);
        action_sub9 = new QAction(MainWindow);
        action_sub9->setObjectName(QString::fromUtf8("action_sub9"));
        action_sub9->setVisible(false);
        action_sub10 = new QAction(MainWindow);
        action_sub10->setObjectName(QString::fromUtf8("action_sub10"));
        action_sub10->setVisible(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new playerwindow(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_cur = new QLabel(centralwidget);
        label_cur->setObjectName(QString::fromUtf8("label_cur"));

        horizontalLayout_2->addWidget(label_cur);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        horizontalSlider->setMaximum(9999);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_dur = new QLabel(centralwidget);
        label_dur->setObjectName(QString::fromUtf8("label_dur"));

        horizontalLayout_2->addWidget(label_dur);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_play->sizePolicy().hasHeightForWidth());
        pushButton_play->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_play->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_play);

        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        sizePolicy1.setHeightForWidth(pushButton_stop->sizePolicy().hasHeightForWidth());
        pushButton_stop->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stop->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_stop);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/fullscr.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        sizePolicy1.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy1);
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #ffffff, stop:1 #ffffff);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 5px;\n"
"}"));
        horizontalSlider_2->setValue(99);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_2);

        pushButton_mute = new QPushButton(centralwidget);
        pushButton_mute->setObjectName(QString::fromUtf8("pushButton_mute"));
        sizePolicy1.setHeightForWidth(pushButton_mute->sizePolicy().hasHeightForWidth());
        pushButton_mute->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_mute->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_mute);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 941, 31));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_5 = new QMenu(menu_2);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_6 = new QMenu(menu_3);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        menu_4 = new QMenu(menubar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_7 = new QMenu(menu_4);
        menu_7->setObjectName(QString::fromUtf8("menu_7"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menubar->addAction(menu_4->menuAction());
        menu->addAction(action_open_f);
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_2->addAction(menu_5->menuAction());
        menu_5->addSeparator();
        menu_5->addAction(action_aud1);
        menu_5->addAction(action_aud2);
        menu_5->addAction(action_aud3);
        menu_5->addAction(action_aud4);
        menu_5->addAction(action_aud5);
        menu_5->addAction(action_aud6);
        menu_5->addAction(action_aud7);
        menu_5->addAction(action_aud8);
        menu_5->addAction(action_aud9);
        menu_5->addAction(action_aud10);
        menu_3->addAction(menu_6->menuAction());
        menu_6->addAction(action_vid1);
        menu_6->addAction(action_vid2);
        menu_6->addAction(action_vid3);
        menu_6->addAction(action_vid4);
        menu_6->addAction(action_vid5);
        menu_6->addAction(action_vid6);
        menu_6->addAction(action_vid7);
        menu_6->addAction(action_vid8);
        menu_6->addAction(action_vid9);
        menu_6->addAction(action_vid10);
        menu_4->addAction(menu_7->menuAction());
        menu_7->addAction(action_sub1);
        menu_7->addAction(action_sub2);
        menu_7->addAction(action_sub3);
        menu_7->addAction(action_sub4);
        menu_7->addAction(action_sub5);
        menu_7->addAction(action_sub6);
        menu_7->addAction(action_sub7);
        menu_7->addAction(action_sub8);
        menu_7->addAction(action_sub9);
        menu_7->addAction(action_sub10);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\321\226\320\260\320\277\320\273\321\224\321\224\321\200", nullptr));
        action_open_f->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270 \321\204\320\260\320\271\320\273", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\271\321\202\320\270", nullptr));
        action_aud1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        action_aud2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action_aud3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        action_aud4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action_aud5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action_aud6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        action_aud7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        action_aud8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action_aud9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        action_aud10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        action_vid1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        action_vid2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action_vid3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        action_vid4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action_vid5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action_vid6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        action_vid7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        action_vid8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action_vid9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        action_vid10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        action_sub1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        action_sub2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action_sub3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        action_sub4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action_sub5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action_sub6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        action_sub7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        action_sub8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action_sub9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        action_sub10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_cur->setText(QCoreApplication::translate("MainWindow", "-:--:--", nullptr));
        label_dur->setText(QCoreApplication::translate("MainWindow", "-:--:--", nullptr));
        pushButton_play->setText(QString());
        pushButton_stop->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\223\321\203\321\207\320\275\321\226\321\201\321\202\321\214", nullptr));
        pushButton_mute->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\262\321\203\320\272", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\270 \320\264\320\276\321\200\321\226\320\266\320\272\321\203", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\265\320\276", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\270 \320\264\320\276\321\200\321\226\320\266\320\272\321\203:", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\261\321\202\320\270\321\202\321\200\320\270", nullptr));
        menu_7->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\321\202\320\270 \320\264\320\276\321\200\321\226\320\266\320\272\321\203:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
