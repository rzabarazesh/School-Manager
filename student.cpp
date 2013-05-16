#include "student.h"
#include <QTableWidgetItem>

student::student(QString e,QString r,QString f,QString sh,QString en,QString hz)
{
    riazi = new QTableWidgetItem ;
    fizik = new QTableWidgetItem ;
    shimi = new QTableWidgetItem ;
    enzebat = new QTableWidgetItem ;
    hozur = new QTableWidgetItem ;
    esm = new QTableWidgetItem ;
    riazi->setText(r);
    fizik->setText(f);
    shimi->setText(sh);
    enzebat->setText(en);
    hozur->setText(hz);
    esm->setText(e);
}
student::student()
{

}

void student::set_all(QString e,QString r,QString f,QString sh,QString en,QString hz)
{
riazi->setText(r);
fizik->setText(f);
shimi->setText(sh);
enzebat->setText(en) ;
hozur->setText(hz) ;
esm->setText(e) ;
}
