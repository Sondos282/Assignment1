#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcome.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui -> label_nameerror -> setVisible(false);
    ui -> label_passerror -> setVisible(false);
    ui -> label_dataerror -> setVisible(false);
    ui -> label_ageerror -> setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButton_Register_clicked()
{
    QString name = ui -> lineEdit_user ->text();
    QString pass = ui -> lineEdit_pass ->text();
    QString repass = ui -> lineEdit_repass ->text();
    QString year = ui -> lineEdit_year ->text();
    int yearnum = year.toInt();
    int age = 2024 - yearnum;
    QString month = ui -> comboBox_months -> currentText();
    bool female = ui -> radioButton_female ->isChecked();
    bool male = ui -> radioButton_male ->isChecked();
    bool user = ui -> radioButton_user->isChecked();
    bool admin = ui -> radioButton_admin->isChecked();

    for(int i = 0; i<100; i++)
    {
        if(name == usernames[i])
        {

            ui -> label_nameerror -> setVisible(true);
            return;
        }
    }

    if(pass != repass)
    {

        ui -> label_passerror -> setVisible(true);
        return;
    }
    if((2024 - yearnum) < 12)
    {

        ui -> label_ageerror -> setVisible(true);
        return;
    }

    if(!(female) && !male)
    {
        ui -> label_dataerror -> setVisible(true);
        return;
    }
    if(!(user) && !admin)
    {
        ui -> label_dataerror -> setVisible(true);
        return;
    }
    usersCount++;
    usernames[usersCount] = name;
    passwords[usersCount] = pass;
    ages[usersCount] = age;
    hide();
    Welcome* ww = new Welcome(this, name, age);
    ww -> show();
}

