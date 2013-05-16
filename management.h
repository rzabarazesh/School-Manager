#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QDialog>
#include <student.h>
#include<QLabel>
#include<QPushButton>
class management : public QDialog
{
    Q_OBJECT
public:
    explicit management(QWidget *parent = 0);
    student * st[20];

    int who ;
    QTableWidget *table ;
    QLabel *welcome ;
    QLineEdit*riazi_i ;
    QLineEdit*fizik_i ;
    QLineEdit*shimi_i ;
    QLineEdit*enzebat_i ;
    QLineEdit*esm_i ;
    QLineEdit*hozur_i ;
    QPushButton *st_add ;
signals:
    
public slots:
    void draw_table () ;
    void setuser (int usr);
    void addstudent();

};

#endif // MANAGEMENT_H
