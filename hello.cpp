#include "hello.h"
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>


HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent), textEdit(new QTextEdit),
      btnProcess(new QPushButton("Process")),
      btnQuit(new QPushButton("Quit"))
{
    setUp();
}

HelloQT::~HelloQT()
{
}

void HelloQT::setUp()
{
 QVBoxLayout *layout(new QVBoxLayout);

 layout->addWidget(textEdit);

}

