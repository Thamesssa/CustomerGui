#include "CustView.h"
#include "custinput.h"
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextStream>
#include <QMessageBox>
#include <QCloseEvent>


CustView::CustView(QWidget *parent)
    : QWidget(parent), textEdit(new QTextEdit),
      btnAddCust(new QPushButton("Add Customer")),
      btnQuit(new QPushButton("Quit"))
{
    setWindowTitle("Customer");
    setUp();

    connect(btnAddCust, SIGNAL(clicked()), this, SLOT(addCustomer()));
}

void CustView::closeEvent(QCloseEvent *event)
{
    int response;
    response = QMessageBox::warning(this,"Exit", "Are you sure you want to exit?",
                                    QMessageBox::Yes|QMessageBox::No);
    if(response == QMessageBox::Yes){
        event;
    }
    else{
        event->ignore();
    }

}

CustView::~CustView()
{
}

void CustView::setUp()
{
 QVBoxLayout *layout(new QVBoxLayout(this));

 layout->addWidget(textEdit);
 layout->addWidget(btnAddCust);
 layout->addWidget(btnQuit);

 textEdit->isReadOnly();

}

void CustView::addCustomer()
{
    CustInput newCust;
    QTextStream cout(stdout);

    newCust.exec();

    if (newCust.result() == QDialog::Accepted) {

            textEdit->append(newCust.getCustomer().toString());
            cout << newCust.getCustomer().toString() << Qt::endl;
        }

}


