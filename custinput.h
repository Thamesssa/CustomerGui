#ifndef CUSTINPUT_H
#define CUSTINPUT_H

#include <QDialog>

#include "customer.h"
class QComboBox;
class QLineEdit;
class QTextEdit;
class QDoubleSpinBox;
class QPushButton;


class CustInput : public QDialog
{
public:
    CustInput();
   ~CustInput();
    Customer getCustomer();
private slots:
    void processInput();
private:
    void setupGUI();
    Customer customer;
    QComboBox *cmbTitle;
    QLineEdit *edtName;
    QTextEdit *txtAddress;
    QLineEdit *edtPostCode;
    QLineEdit *edtCode;
    QDoubleSpinBox * spnBalance;
    QPushButton *btnSubmit;
    QPushButton *btnClose;


};

#endif // CUSTINPUT_H
