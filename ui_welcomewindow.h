/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label_hello;
    QLabel *label_img;
    QLabel *label_welcome;
    QPushButton *pushButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(400, 300);
        label_hello = new QLabel(WelcomeWindow);
        label_hello->setObjectName("label_hello");
        label_hello->setGeometry(QRect(30, 30, 131, 21));
        label_img = new QLabel(WelcomeWindow);
        label_img->setObjectName("label_img");
        label_img->setGeometry(QRect(6, 60, 391, 131));
        label_welcome = new QLabel(WelcomeWindow);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(150, 80, 101, 31));
        pushButton = new QPushButton(WelcomeWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(19, 220, 91, 21));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label_hello->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        label_img->setText(QCoreApplication::translate("WelcomeWindow", "TextLabel", nullptr));
        label_welcome->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Welcome</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
