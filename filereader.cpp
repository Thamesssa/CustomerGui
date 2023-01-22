#include "filereader.h"
#include <QFile>
#include <QTextStream>

FileReader::FileReader(QString fname):filename(fname)
{

}

QString FileReader::read() const
{
    QFile inFile(filename);
    if(!inFile.open(QIODevice::ReadOnly))
    {
        return "";
    }

    QTextStream inStream(&inFile);
    QString inStr(inFile.readAll());

    inFile.close();
    return inStr;

}
