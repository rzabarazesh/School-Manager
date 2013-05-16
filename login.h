#ifndef LOGIN_H
#define LOGIN_H

#include <management.h>
#include <QDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class login : public QDialog
{

    Q_OBJECT
public:
    explicit login(QWidget *parent = 0);
private :
    QPushButton * login_button ;
    QPushButton * exit ;
    QWidget * loginform  ;
    QLineEdit * username ;
    QLineEdit * password ;
    QVBoxLayout * login_layout ;
    QHBoxLayout * button_layout ;

signals:
    void showmanage(int i) ;
public slots:
   void finduser();

};

#endif // LOGIN_H
