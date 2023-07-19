/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *quitBtn;
    QLabel *label;
    QLabel *loginLab;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginBtn;
    QPushButton *forgotpwd;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *line2;
    QLabel *line1;
    QPushButton *minimizeBtn;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1440, 810);
        LoginWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        quitBtn = new QPushButton(centralwidget);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setGeometry(QRect(1370, 20, 35, 35));
        quitBtn->setStyleSheet(QString::fromUtf8(" QPushButton:hover { \n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"QPushButton{\n"
"image: url(:/res/\347\273\204 3.png);\n"
"border-style:outset\n"
"	}\n"
"	\n"
"	"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(189, 161, 645, 456));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/res/logoback.png);\n"
"\n"
"position: absolute;\n"
"left: 251px;\n"
"top: 215px;\n"
"width: 861px;\n"
"height: 609px;\n"
"border-radius: 20px 0px 0px 20px;\n"
"opacity: 1;\n"
"\n"
"	"));
        loginLab = new QLabel(centralwidget);
        loginLab->setObjectName(QString::fromUtf8("loginLab"));
        loginLab->setGeometry(QRect(885, 225, 80, 57));
        loginLab->setStyleSheet(QString::fromUtf8("/* \347\231\273\345\275\225 */\n"
"\n"
"position: absolute;\n"
"left: 0px;\n"
"top: 0px;\n"
"width: 106.67px;\n"
"height: 77.16px;\n"
"opacity: 1;\n"
"	\n"
"font-family: \346\200\235\346\272\220\351\273\221\344\275\223;\n"
"font-size: 40px;\n"
"font-weight: 500;\n"
"	background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color: #FFFFFF;\n"
"	"));
        usernameEdit = new QLineEdit(centralwidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(885, 310, 313, 49));
        usernameEdit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:1;\n"
"border-style:none none soild none;\n"
"color: rgb(238, 238, 236);\n"
"background-image: url(:/res/user.png); \n"
"background-repeat: no-repeat;\n"
"background-position: left;\n"
"font-size: 18px;\n"
"padding: 2 2 2 35; \n"
"\n"
"font-family: Source Han Sans CN;\n"
"font-weight: normal;\n"
"\n"
"\n"
""));
        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(885, 380, 313, 49));
        passwordEdit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:1;\n"
"border-style:none none soild none;\n"
"color: rgb(238, 238, 236);\n"
"\n"
"background-image: url(:/res/pwd.png); \n"
"background-repeat: no-repeat;\n"
"background-position: left;\n"
"font-size: 18px;\n"
"padding: 2 2 2 35; \n"
"\n"
"font-family: Source Han Sans CN;\n"
"font-weight: normal;"));
        passwordEdit->setEchoMode(QLineEdit::Password);
        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(885, 470, 313, 46));
        loginBtn->setStyleSheet(QString::fromUtf8("\n"
" QPushButton:hover { \n"
"	background-color: rgb(114, 159, 207);\n"
" color: rgb(255, 255, 255);}\n"
"QPushButton { \n"
"/* \347\237\251\345\275\242 3 */\n"
"\n"
"position: absolute;\n"
"left: 0.29px;\n"
"top: 0.07px;\n"
"width: 418px;\n"
"height: 62px;\n"
"border-radius: 5px;\n"
"opacity: 1;\n"
"	\n"
"background: #FFFFFF;\n"
"/* Login */\n"
"\n"
"position: absolute;\n"
"left: 181.29px;\n"
"top: 17.07px;\n"
"width: 13.4%;\n"
"height: 45.16%;\n"
"opacity: 1;\n"
"	\n"
"font-family: \346\200\235\346\272\220\351\273\221\344\275\223;\n"
"font-size: 20px;\n"
"font-weight: 500;\n"
"	\n"
"color: #000823;}\n"
"	"));
        forgotpwd = new QPushButton(centralwidget);
        forgotpwd->setObjectName(QString::fromUtf8("forgotpwd"));
        forgotpwd->setGeometry(QRect(1135, 525, 65, 30));
        forgotpwd->setStyleSheet(QString::fromUtf8(" QPushButton:hover { \n"
"	color: rgb(114, 159, 207);\n"
"}\n"
"/* \345\277\230\350\256\260\345\257\206\347\240\201 */\n"
"QPushButton{\n"
"position: absolute;\n"
"left: 353.29px;\n"
"top: 404px;\n"
"width: 65px;\n"
"height: 30.6px;\n"
"opacity: 1;\n"
"	\n"
"font-family: \346\200\235\346\272\220\351\273\221\344\275\223;\n"
"font-size: 16px;\n"
"font-weight: normal;\n"
"	\n"
"color: #FFFFFF;\n"
"background:transparent;\n"
"border-width:0;\n"
"border-style:outset;}\n"
"	\n"
"	"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(189, 161, 1062, 456));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"position: absolute;\n"
"left: 251px;\n"
"top: 215px;\n"
"width: 1417px;\n"
"height: 609px;\n"
"border-radius: 20px;\n"
"opacity: 1;\n"
"	\n"
"background: #000823;\n"
"	"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 1440, 810));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/res/background.png);"));
        line2 = new QLabel(centralwidget);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setGeometry(QRect(885, 430, 313, 1));
        line2->setStyleSheet(QString::fromUtf8("/* \347\233\264\347\272\277 1 */\n"
"\n"
"position: absolute;\n"
"left: 0px;\n"
"top: 65.26px;\n"
"width: 418px;\n"
"height: 0px;\n"
"opacity: 1;\n"
"	\n"
"border: 1px solid #FFFFFF;\n"
"	"));
        line1 = new QLabel(centralwidget);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setGeometry(QRect(885, 360, 313, 1));
        line1->setStyleSheet(QString::fromUtf8("/* \347\233\264\347\272\277 1 */\n"
"\n"
"position: absolute;\n"
"left: 0px;\n"
"top: 65.26px;\n"
"width: 418px;\n"
"height: 0px;\n"
"opacity: 1;\n"
"	\n"
"border: 1px solid #FFFFFF;\n"
"	"));
        minimizeBtn = new QPushButton(centralwidget);
        minimizeBtn->setObjectName(QString::fromUtf8("minimizeBtn"));
        minimizeBtn->setGeometry(QRect(1310, 20, 35, 35));
        minimizeBtn->setStyleSheet(QString::fromUtf8(" QPushButton:hover { \n"
"	background-color: rgb(52, 101, 164);\n"
"}\n"
"QPushButton{\n"
"image: url(:/res/\347\273\204 5.png);\n"
"border-style:outset}\n"
"	\n"
"	\n"
"	"));
        LoginWindow->setCentralWidget(centralwidget);
        label_3->raise();
        label_2->raise();
        label->raise();
        quitBtn->raise();
        usernameEdit->raise();
        passwordEdit->raise();
        loginBtn->raise();
        forgotpwd->raise();
        loginLab->raise();
        line2->raise();
        line1->raise();
        minimizeBtn->raise();

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        quitBtn->setText(QString());
        label->setText(QCoreApplication::translate("LoginWindow", "TextLabel", nullptr));
        loginLab->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        usernameEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        loginBtn->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        forgotpwd->setText(QCoreApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "TextLabel", nullptr));
        label_3->setText(QString());
        line2->setText(QString());
        line1->setText(QString());
        minimizeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
