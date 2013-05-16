#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QDialog>
#include <student.h>
class management : public QDialog
{
    Q_OBJECT
public:
    explicit management(QWidget *parent = 0);
    student * st[10];
signals:
    
public slots:

};

#endif // MANAGEMENT_H
