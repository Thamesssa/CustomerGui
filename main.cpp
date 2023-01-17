#include "customer.h"
#include <QDebug>
#include <QTextStream>
#include <iostream>

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextStream cout(stdout);
    Customer customer1;

        // Set values using setters
        customer1.setTitle("Mr");
        customer1.setName("John Smith");
        customer1.setAddress(QStringList{"123 Main St", "Anytown USA"});
        customer1.setCode("ABC123");
        customer1.setBalance(100.50);
        customer1.setPostCode("12345");



        // Display contents using toString() method
       cout << "Customer 1: " << customer1.toString() << endl;





    return a.exec();
}
