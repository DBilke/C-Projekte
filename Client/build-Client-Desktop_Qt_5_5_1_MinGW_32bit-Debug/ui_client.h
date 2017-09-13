/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QAction *actionNeues_Element;
    QAction *actionProtokoll_speichern;
    QAction *actionProtokoll_leeren;
    QAction *actionBeenden;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuClient_f_r_Mysql_Server;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(517, 241);
        actionNeues_Element = new QAction(Client);
        actionNeues_Element->setObjectName(QStringLiteral("actionNeues_Element"));
        actionProtokoll_speichern = new QAction(Client);
        actionProtokoll_speichern->setObjectName(QStringLiteral("actionProtokoll_speichern"));
        actionProtokoll_leeren = new QAction(Client);
        actionProtokoll_leeren->setObjectName(QStringLiteral("actionProtokoll_leeren"));
        actionBeenden = new QAction(Client);
        actionBeenden->setObjectName(QStringLiteral("actionBeenden"));
        centralWidget = new QWidget(Client);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 16));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 50, 501, 131));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 20, 75, 23));
        Client->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Client);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 517, 21));
        menuClient_f_r_Mysql_Server = new QMenu(menuBar);
        menuClient_f_r_Mysql_Server->setObjectName(QStringLiteral("menuClient_f_r_Mysql_Server"));
        Client->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Client);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Client->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Client);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Client->setStatusBar(statusBar);

        menuBar->addAction(menuClient_f_r_Mysql_Server->menuAction());
        menuClient_f_r_Mysql_Server->addAction(actionProtokoll_speichern);
        menuClient_f_r_Mysql_Server->addAction(actionProtokoll_leeren);
        menuClient_f_r_Mysql_Server->addSeparator();
        menuClient_f_r_Mysql_Server->addAction(actionBeenden);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", 0));
        actionNeues_Element->setText(QApplication::translate("Client", "Neues Element", 0));
        actionProtokoll_speichern->setText(QApplication::translate("Client", "Protokoll speichern", 0));
        actionProtokoll_leeren->setText(QApplication::translate("Client", "Protokoll leeren", 0));
        actionBeenden->setText(QApplication::translate("Client", "Beenden", 0));
        label->setText(QApplication::translate("Client", "Verbindungsname:", 0));
        pushButton->setText(QApplication::translate("Client", "Start", 0));
        menuClient_f_r_Mysql_Server->setTitle(QApplication::translate("Client", "Client f\303\274r Mysql-Server", 0));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
