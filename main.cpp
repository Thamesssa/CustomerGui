
#include <QDebug>
#include <QTextStream>
#include <iostream>

#include <QApplication>
#include "custinput.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream cout(stdout);
    CustInput Input;
    Input.exec();

    if(Input.result() == QDialog::Accepted){
        cout << Input.getCustomer().toString() << Qt::endl;
    }
    else {
        cout << "Dialog Closed" << Qt::endl;
    }
    return a.exec();



}
