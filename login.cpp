#include <QtGui>
#include "login.h"
#include <iostream>
#include <string>
void login::finduser()
{



    emit showmanage() ;

    return;
}
login::login(QWidget *parent) :
    QDialog(parent)
{
    QPushButton * login_button = new QPushButton;
    QPushButton * exit = new QPushButton;
    login_button->setText("LOGIN");
    exit->setText("EXIT");

    QLineEdit * username  = new QLineEdit;
    QLineEdit * password  = new QLineEdit;
    QVBoxLayout * login_layout = new  QVBoxLayout ;
    QHBoxLayout * button_layout = new  QHBoxLayout ;
    username->setText("Enter Username ...");
    password->setText("Enter Password ... ");

    exit->connect(exit,SIGNAL(pressed()),this , SLOT(close()));
    login_layout->addWidget(username);
    login_layout->addWidget(password);

    button_layout->addWidget(login_button);
    button_layout->addWidget(exit);

    login_layout->addLayout(button_layout);
    this->setLayout(login_layout);

    this->connect(login_button,SIGNAL(clicked()),this,SLOT(finduser()));
}



