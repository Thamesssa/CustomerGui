#ifndef HELLOQT_H
#define HELLOQT_H

#include <QWidget>
class QTextEdit;
class QPushButton;

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();
    void setUp();
private slots:
    void processInput();

private:
    QTextEdit *textEdit;
    QPushButton *btnProcess;
    QPushButton *btnQuit;

};
#endif // HELLOQT_H
