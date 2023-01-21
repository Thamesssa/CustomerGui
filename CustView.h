#ifndef CUSTVIEW_H
#define CUSTVIEW_H
#include <QWidget>
#include <customerlist.h>
class QTextEdit;
class QPushButton;

class CustView : public QWidget
{
    Q_OBJECT

public:
    CustView(QWidget *parent = nullptr);
    void closeEvent(QCloseEvent *event);
    ~CustView();

private slots:
    void addCustomer();

private:
     void setUp();
    CustomerList list;
    QTextEdit *textEdit;
    QPushButton * btnAddCust;
    QPushButton *btnQuit;

};
#endif // HELLOQT_H
