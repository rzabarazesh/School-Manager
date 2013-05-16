#include <QtGui>
#include "login.h"
#include <iostream>
#include <string>

login::login(QWidget *parent) :
    QDialog(parent)
{
    login_button = new QPushButton;
    exit = new QPushButton;
    login_button->setText("LOGIN");
    exit->setText("EXIT");

    username  = new QLineEdit;
    password  = new QLineEdit;
    login_layout = new  QVBoxLayout ;
    button_layout = new  QHBoxLayout ;
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

void login::finduser()
{

    if (username->text()=="moalem"&&password->text()=="moalem")
    emit showmanage() ;

    return;
}

