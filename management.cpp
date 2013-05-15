#include "management.h"
#include <QPushButton>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
management::management(QWidget *parent) :
    QDialog(parent)
{

    QHBoxLayout* manage_layout = new QHBoxLayout ;
    QTableWidget *table = new QTableWidget ;
    QPushButton *set = new QPushButton ;
    table->setColumnCount(6);
    table->setRowCount(11);
    QTableWidgetItem * item ;
    QString names[] = {"---","ali","hamed","hesam","reza","abbas","kazem","jafar","akbar","nasir","abdolah"};
    for (int i = 0 ; i < 11;i++)
    {
            item = new QTableWidgetItem ;
            item->setText(names[i]);
            table->setItem(i,0,item);
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
