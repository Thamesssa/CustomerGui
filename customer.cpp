#include "customer.h"

Customer::Customer()

{
}

Customer::~Customer()
{
}

QString Customer::getTitle() const
{
    return m_title;
}

void Customer::setTitle(QString t)
{
    m_title = t;
}

QString Customer::getName() const
{
    return m_name;
}

void Customer::setName( QString n)
{
    m_name = n;
}

QStringList Customer::getAddress() const
{
    return m_address;
}

void Customer::setAddress( QStringList a)
{
    m_address = a;
}

QString Customer::getPostCode() const
{
    return m_postCode;
}

void Customer::setPostCode( QString pc)
{
    m_postCode = pc;
}

QString Customer::getCode() const
{
    return m_code;
}

void Customer::setCode(QString c)
{
    m_code = c;
}

double Customer::getBalance() const
{
    return m_balance;
}

void Customer::setBalance(double amt)
{
    m_balance = amt;
}

QString Customer::toString() const
{
    return QString("Title: %1,\n Name: %2,\n Address: %3,\n Postal Code: %4,\n Code: %5,\n Balance: %6 ")
            .arg(m_title)
            .arg(m_name)
            .arg(m_address.join("\n"))
            .arg(m_postCode)
            .arg(m_code)
            .arg(QString::number(m_balance,'f',2));
}

