#ifndef STUDENT_H
#define STUDENT_H

#include <QTableWidgetItem>

class student
{
public:
    student();
    student(QString e,QString r,QString f,QString sh,QString en,QString hz);
    void set_all(QString e,QString r,QString f,QString sh,QString en,QString hz);

    QTableWidgetItem *riazi;
    QTableWidgetItem *fizik;
    QTableWidgetItem *shimi;
    QTableWidgetItem *enzebat;
    QTableWidgetItem *hozur;
    QTableWidgetItem *esm;


};

#endif // STUDENT_H
