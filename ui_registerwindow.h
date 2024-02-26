/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label_user;
    QLabel *label_pass;
    QLabel *label_repass;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_repass;
    QGroupBox *groupBox_birthdate;
    QComboBox *comboBox_months;
    QLabel *label_month;
    QLabel *label_day;
    QLabel *label_year;
    QLineEdit *lineEdit_day;
    QLineEdit *lineEdit_year;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QGroupBox *groupBox_account;
    QRadioButton *radioButton_user;
    QRadioButton *radioButton_admin;
    QGroupBox *groupBox_genres;
    QCheckBox *checkBox_action;
    QCheckBox *checkBox_drama;
    QCheckBox *checkBox_comedy;
    QCheckBox *checkBox_horror;
    QCheckBox *checkBox_romance;
    QCheckBox *checkBox_other;
    QPushButton *pushButton_Register;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(400, 359);
        label_user = new QLabel(RegisterWindow);
        label_user->setObjectName("label_user");
        label_user->setGeometry(QRect(90, 10, 61, 16));
        label_pass = new QLabel(RegisterWindow);
        label_pass->setObjectName("label_pass");
        label_pass->setGeometry(QRect(90, 30, 51, 16));
        label_repass = new QLabel(RegisterWindow);
        label_repass->setObjectName("label_repass");
        label_repass->setGeometry(QRect(90, 50, 81, 16));
        lineEdit_user = new QLineEdit(RegisterWindow);
        lineEdit_user->setObjectName("lineEdit_user");
        lineEdit_user->setGeometry(QRect(170, 10, 113, 20));
        lineEdit_pass = new QLineEdit(RegisterWindow);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(170, 30, 113, 20));
        lineEdit_repass = new QLineEdit(RegisterWindow);
        lineEdit_repass->setObjectName("lineEdit_repass");
        lineEdit_repass->setGeometry(QRect(170, 50, 113, 20));
        groupBox_birthdate = new QGroupBox(RegisterWindow);
        groupBox_birthdate->setObjectName("groupBox_birthdate");
        groupBox_birthdate->setGeometry(QRect(90, 80, 271, 80));
        comboBox_months = new QComboBox(groupBox_birthdate);
        comboBox_months->setObjectName("comboBox_months");
        comboBox_months->setGeometry(QRect(0, 40, 55, 22));
        label_month = new QLabel(groupBox_birthdate);
        label_month->setObjectName("label_month");
        label_month->setGeometry(QRect(10, 20, 37, 12));
        label_day = new QLabel(groupBox_birthdate);
        label_day->setObjectName("label_day");
        label_day->setGeometry(QRect(60, 20, 37, 12));
        label_year = new QLabel(groupBox_birthdate);
        label_year->setObjectName("label_year");
        label_year->setGeometry(QRect(110, 20, 37, 12));
        lineEdit_day = new QLineEdit(groupBox_birthdate);
        lineEdit_day->setObjectName("lineEdit_day");
        lineEdit_day->setGeometry(QRect(60, 40, 41, 20));
        lineEdit_year = new QLineEdit(groupBox_birthdate);
        lineEdit_year->setObjectName("lineEdit_year");
        lineEdit_year->setGeometry(QRect(110, 40, 51, 20));
        groupBox_gender = new QGroupBox(RegisterWindow);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(90, 170, 120, 80));
        radioButton_male = new QRadioButton(groupBox_gender);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(10, 20, 69, 18));
        radioButton_female = new QRadioButton(groupBox_gender);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(10, 40, 69, 18));
        groupBox_account = new QGroupBox(RegisterWindow);
        groupBox_account->setObjectName("groupBox_account");
        groupBox_account->setGeometry(QRect(240, 170, 120, 80));
        radioButton_user = new QRadioButton(groupBox_account);
        radioButton_user->setObjectName("radioButton_user");
        radioButton_user->setGeometry(QRect(10, 20, 69, 18));
        radioButton_admin = new QRadioButton(groupBox_account);
        radioButton_admin->setObjectName("radioButton_admin");
        radioButton_admin->setGeometry(QRect(10, 40, 69, 18));
        groupBox_genres = new QGroupBox(RegisterWindow);
        groupBox_genres->setObjectName("groupBox_genres");
        groupBox_genres->setGeometry(QRect(90, 240, 241, 91));
        checkBox_action = new QCheckBox(groupBox_genres);
        checkBox_action->setObjectName("checkBox_action");
        checkBox_action->setGeometry(QRect(0, 20, 58, 18));
        checkBox_drama = new QCheckBox(groupBox_genres);
        checkBox_drama->setObjectName("checkBox_drama");
        checkBox_drama->setGeometry(QRect(90, 20, 58, 18));
        checkBox_comedy = new QCheckBox(groupBox_genres);
        checkBox_comedy->setObjectName("checkBox_comedy");
        checkBox_comedy->setGeometry(QRect(0, 40, 58, 18));
        checkBox_horror = new QCheckBox(groupBox_genres);
        checkBox_horror->setObjectName("checkBox_horror");
        checkBox_horror->setGeometry(QRect(90, 40, 58, 18));
        checkBox_romance = new QCheckBox(groupBox_genres);
        checkBox_romance->setObjectName("checkBox_romance");
        checkBox_romance->setGeometry(QRect(0, 60, 58, 18));
        checkBox_other = new QCheckBox(groupBox_genres);
        checkBox_other->setObjectName("checkBox_other");
        checkBox_other->setGeometry(QRect(90, 60, 58, 18));
        pushButton_Register = new QPushButton(RegisterWindow);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setGeometry(QRect(160, 330, 80, 18));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label_user->setText(QCoreApplication::translate("RegisterWindow", "Username:", nullptr));
        label_pass->setText(QCoreApplication::translate("RegisterWindow", "Password:", nullptr));
        label_repass->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password:", nullptr));
        groupBox_birthdate->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        label_month->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        label_day->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_year->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButton_male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_account->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButton_user->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_genres->setTitle(QCoreApplication::translate("RegisterWindow", "Favourinte Genre(s)", nullptr));
        checkBox_action->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBox_drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_comedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_horror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBox_romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
