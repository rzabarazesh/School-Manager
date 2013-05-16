#include "management.h"
#include <QPushButton>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>


#include <student.h>
#include<iostream>

management::management(QWidget *parent) :
    QDialog(parent)
{

    this->setWindowTitle("مدیریت");
    this->setMinimumHeight(500);
    this->setMaximumWidth(650);
     //STUDENTS

     st[0]= new student("علی","19","12","14","17","HAZER");
     st[1]= new student("حسن","13","16","13","11","HAZER");
     st[2]= new student("حسین","19","12","14","17","ghayeb");
     st[3]= new student("حمید","16","14","14","17","HAZER");
     st[4]= new student("حسام","19","12","14","17","HAZER");
     st[5]= new student("رضا","17","12","14","16","HAZER");
     st[6]= new student("اکبر","19","11","14","17","HAZER");
     st[7]= new student("مهدی","19","17","14","11","ghayeb");
     st[8]= new student("جواد","13","12","15","11","HAZER");
     st[9]= new student("تقی","15","12","14","17","HAZER");

    //=================

    QVBoxLayout* manage_layout = new QVBoxLayout ;
    QHBoxLayout* manage_news = new QHBoxLayout ;
    QHBoxLayout* manage_btns = new QHBoxLayout ;
    QPushButton *exit_manage = new QPushButton ;
    st_add = new QPushButton ;
    QLabel *L_riazi = new QLabel;
    QLabel *L_fizik = new QLabel;
    QLabel *L_shimi = new QLabel;
    QLabel *L_enzebat = new QLabel;
    QLabel *L_esm = new QLabel;
    QLabel *L_hozur = new QLabel;
    welcome = new QLabel;
    L_riazi->setText(":ریاضی");
    L_fizik->setText(":فیزیک");
    L_shimi->setText(":شیمی");
    L_enzebat->setText(":انظباط");
    L_esm->setText(":نام ");
    L_hozur->setText(":حضور و غیاب ");
    riazi_i = new QLineEdit;
    fizik_i= new QLineEdit ;
    shimi_i= new QLineEdit ;
    enzebat_i = new QLineEdit;
    esm_i = new QLineEdit;
    hozur_i = new QLineEdit;
    manage_btns->addWidget(st_add);
    manage_btns->addWidget(exit_manage);
    manage_news->addWidget(L_esm);
    manage_news->addWidget(esm_i);
    manage_news->addWidget(L_riazi);
    manage_news->addWidget(riazi_i);
    manage_news->addWidget(L_fizik);
    manage_news->addWidget(fizik_i);
    manage_news->addWidget(L_shimi);
    manage_news->addWidget(shimi_i);
    manage_news->addWidget(L_enzebat);
    manage_news->addWidget(enzebat_i);

    manage_news->addWidget(L_hozur);
    manage_news->addWidget(hozur_i);
    st_add->setText("افزودن دانش آموز جدید - ویژه ی ناظم");
    exit_manage->setText("خروج");
    QObject::connect(exit_manage,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(st_add,SIGNAL(clicked()),this,SLOT(addstudent()));

    table = new QTableWidget ;
    table->setColumnCount(6);
    table->setRowCount(10);
    QTableWidgetItem * item ;
    QStringList titles();


    QString titrs[] = {"---","ریاضی","فیزیک","شیمی","انظباط","حضور و غیاب"};
    for (int i = 0 ; i < 6;i++)
    {
            item = new QTableWidgetItem ;
            item->setText(titrs[i]);
            table->setItem(0,i,item);
    }
    manage_layout->addWidget(welcome);
    manage_layout->addWidget(table);
    manage_layout->addLayout(manage_news);
    manage_layout->addLayout(manage_btns);

    this->setLayout(manage_layout);


}
void management::setuser (int usr)
{
    this->who = usr ;
    return;
}

void management::draw_table ()
{
    for (int i = 1 ; i < 10;i++)
    {
        if (who == 0 )
            welcome->setText("خوش آمدید ناظم");
        if (who == 1 )
        {
            welcome->setText("خوش آمدید معلم");
            this->st_add->setEnabled(false);
         }

        table->setItem(i,0,st[i]->esm);
        table->item(i,0)->setFlags(Qt::ItemIsEditable);

        table->setItem(i,1,st[i]->riazi);
        if (who == 0)
            table->item(i,1)->setFlags(Qt::ItemIsSelectable);

        table->setItem(i,2,st[i]->fizik);
        if (who == 0)
            table->item(i,2)->setFlags(Qt::ItemIsSelectable);

        table->setItem(i,3,st[i]->shimi);
        if (who == 0)
            table->item(i,3)->setFlags(Qt::ItemIsSelectable);

        table->setItem(i,4,st[i]->enzebat);
        if (who == 1)
        table->item(i,4)->setFlags(Qt::ItemIsSelectable);

        table->setItem(i,5,st[i]->hozur);
        if (who == 0)
            table->item(i,5)->setFlags(Qt::ItemIsSelectable);
    }
    return;
}

void management::addstudent()
{
    int crrnt_size = this->table->rowCount() ;
    this->st[crrnt_size] = new student(esm_i->text(),riazi_i->text(),fizik_i->text(),shimi_i->text(),enzebat_i->text(),hozur_i->text());
    table->setRowCount(crrnt_size + 1);



    table->setItem(crrnt_size,0,st[crrnt_size]->esm);
    table->item(crrnt_size,0)->setFlags(Qt::ItemIsEditable);

    table->setItem(crrnt_size,1,st[crrnt_size]->riazi);
    if (who == 0)
        table->item(crrnt_size,1)->setFlags(Qt::ItemIsSelectable);

    table->setItem(crrnt_size,2,st[crrnt_size]->fizik);
    if (who == 0)
        table->item(crrnt_size,2)->setFlags(Qt::ItemIsSelectable);

    table->setItem(crrnt_size,3,st[crrnt_size]->shimi);
    if (who == 0)
        table->item(crrnt_size,3)->setFlags(Qt::ItemIsSelectable);

    table->setItem(crrnt_size,4,st[crrnt_size]->enzebat);
    if (who == 1)
    table->item(crrnt_size,4)->setFlags(Qt::ItemIsSelectable);

    table->setItem(crrnt_size,5,st[crrnt_size]->hozur);
    if (who == 0)
        table->item(crrnt_size,5)->setFlags(Qt::ItemIsSelectable);

}
