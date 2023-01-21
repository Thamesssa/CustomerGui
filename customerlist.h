#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H

#include "customer.h"
#include <QList>
#include <QString>

class CustomerList : public QList<Customer>
{
public:
    CustomerList();
    QList<Customer> getList() const;
    QString toString() const;
};

#endif // CUSTOMERLIST_H
