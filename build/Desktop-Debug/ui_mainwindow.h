/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *host_LE;
    QLineEdit *database_LE;
    QLineEdit *username_LE;
    QLineEdit *password_LE;
    QTextEdit *output_TE;
    QPushButton *connectButton;
    QLabel *host_label;
    QLabel *database_label;
    QLabel *username_label;
    QLabel *password_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        host_LE = new QLineEdit(centralwidget);
        host_LE->setObjectName(QString::fromUtf8("host_LE"));
        host_LE->setGeometry(QRect(110, 20, 113, 25));
        database_LE = new QLineEdit(centralwidget);
        database_LE->setObjectName(QString::fromUtf8("database_LE"));
        database_LE->setGeometry(QRect(110, 60, 113, 25));
        username_LE = new QLineEdit(centralwidget);
        username_LE->setObjectName(QString::fromUtf8("username_LE"));
        username_LE->setGeometry(QRect(110, 100, 113, 25));
        password_LE = new QLineEdit(centralwidget);
        password_LE->setObjectName(QString::fromUtf8("password_LE"));
        password_LE->setGeometry(QRect(110, 140, 113, 25));
        output_TE = new QTextEdit(centralwidget);
        output_TE->setObjectName(QString::fromUtf8("output_TE"));
        output_TE->setGeometry(QRect(450, 40, 211, 171));
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(130, 210, 80, 25));
        host_label = new QLabel(centralwidget);
        host_label->setObjectName(QString::fromUtf8("host_label"));
        host_label->setGeometry(QRect(40, 20, 71, 20));
        database_label = new QLabel(centralwidget);
        database_label->setObjectName(QString::fromUtf8("database_label"));
        database_label->setGeometry(QRect(10, 60, 91, 20));
        username_label = new QLabel(centralwidget);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(40, 100, 61, 17));
        password_label = new QLabel(centralwidget);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(40, 140, 61, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        host_label->setText(QCoreApplication::translate("MainWindow", "Host Name", nullptr));
        database_label->setText(QCoreApplication::translate("MainWindow", "Database Name", nullptr));
        username_label->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
