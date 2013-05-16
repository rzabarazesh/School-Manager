#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    management * manage = new management;

    login * loginform = new login ;
    QObject::connect(loginform,SIGNAL(showmanage()),manage,SLOT(show()));
    QObject::connect(loginform,SIGNAL(showmanage()),loginform,SLOT(close()));

    loginform->show();

    return a.exec();
}
