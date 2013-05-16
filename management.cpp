#include "management.h"
#include <QPushButton>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHBoxLayout>

#include <student.h>

management::management(QWidget *parent) :
    QDialog(parent)
{
     //STUDENTS
    student * st[10] ;
     st[0]= new student("ali","19","12","14","17","HAZER");
     st[1]= new student("hasan","13","16","13","11","HAZER");
     st[2]= new student("hesam","19","12","14","17","HAZER");
     st[3]= new student("nasrolah","16","14","14","17","HAZER");
     st[4]= new student("nasiroldin","19","12","14","17","HAZER");
     st[5]= new student("feyzolah","17","12","14","16","HAZER");
     st[6]= new student("beytolah","19","11","14","17","HAZER");
     st[7]= new student("karamolah","19","17","14","11","HAZER");
     st[8]= new student("keivan","13","12","15","11","HAZER");
     st[9]= new student("akbar","15","12","14","17","HAZER");

    //=================

    QHBoxLayout* manage_layout = new QHBoxLayout ;
    QTableWidget *table = new QTableWidget ;
    QPushButton *set = new QPushButton ;
    table->setColumnCount(6);
    table->setRowCount(11);
    QTableWidgetItem * item ;
    //QString names[] = {"---","ali","hamed","hesam","reza","abbas","kazem","jafar","akbar","nasir","abdolah"};
    for (int i = 0 ; i < 10;i++)
    {          
        table->setItem(i,0,st[i]->esm);
    }
    QString titrs[] = {"---","riazi","fizik","shimi","enzebat","hozurghiab"};
    for (int i = 0 ; i < 6;i++)
    {
            item = new QTableWidgetItem ;
            item->setText(titrs[i]);
            table->setItem(0,i,item);
    }





    manage_layout->addWidget(table);
    manage_layout->addWidget(set);

    this->setLayout(manage_layout);



}
