
#include "custinput.h"
#include <QVBoxLayout>
#include <QComboBox>
#include <QLineEdit>
#include <QTextEdit>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QLabel>


CustInput::CustInput():cmbTitle(new QComboBox),
                       edtName(new QLineEdit),
                       txtAddress(new QTextEdit),
                       edtPostCode(new QLineEdit),
                       edtCode(new QLineEdit),
                       spnBalance(new QDoubleSpinBox),
                       btnSubmit(new QPushButton("Submit")),
                       btnClose(new QPushButton("Close"))


{
    setupGUI();

    connect(btnSubmit, &QPushButton::clicked, this, &CustInput::processInput );
    connect(btnClose,&QPushButton::clicked, this, &QWidget::close);

    setWindowTitle("Add Customer");
}

CustInput::~CustInput()
{

}

Customer CustInput::getCustomer()
{

return customer;


}

void CustInput::processInput()
{
    customer.setTitle(cmbTitle->currentText());
    customer.setName(edtName->text());
    customer.setAddress(txtAddress->toPlainText().split(('\n')));
    customer.setPostCode(edtPostCode->text());
    customer.setCode(edtCode->text());
    customer.setBalance(spnBalance->value());

    //accept dialog results
    accept();


}

void CustInput::setupGUI()
{
    //Declare WIdgets
   QVBoxLayout *Layout(new QVBoxLayout(this));
   QLabel *lblTitle(new QLabel("Title"));
   QLabel *lblName(new QLabel("Name"));
   QLabel *lblAddress(new QLabel("Address"));
   QLabel *lblPostCode(new QLabel("Post Code"));
   QLabel *lblCode(new QLabel("Code"));
   QLabel *lblBalance(new QLabel("Balance"));

   //setup Layouts
   Layout->addWidget(lblTitle);
   Layout->addWidget(cmbTitle);
   Layout->addWidget(lblName);
   Layout->addWidget(edtName);
   Layout->addWidget(lblAddress);
   Layout->addWidget(txtAddress);
   Layout->addWidget(lblPostCode);
   Layout->addWidget(edtPostCode);
   Layout->addWidget(lblCode);
   Layout->addWidget(edtCode);
   Layout->addWidget(lblBalance);
   Layout->addWidget(spnBalance);
   Layout->addSpacing(10);
   Layout->addWidget(btnSubmit);
   Layout->addWidget(btnClose);




   //Populate the spinBox
   QStringList list =  QStringList ()<< "Mr" << "Mrs" << "Ms" << "Dr" << "Hon" <<  "Rev";
   cmbTitle->addItems(list);

   spnBalance->setMaximum(9999.99);
   spnBalance->setMinimum(0.00);
   spnBalance->setAlignment(Qt::AlignRight);
   spnBalance->setButtonSymbols(QAbstractSpinBox::NoButtons);

}
