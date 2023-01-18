
#include <QDebug>
#include <QTextStream>
#include <iostream>

#include <QApplication>
#include "custinput.h"
#include "CustView.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream cout(stdout);

    CustView Input;
    Input.show();




    return a.exec();



}
