#include "filewriter.h"
#include <QFile>
#include <QTextStream>

FileWriter::FileWriter(QString fname):filename(fname)
{

}

bool FileWriter::write(QString str) const
{
    QFile outFile(filename);
    if(!outFile.open(QIODevice::WriteOnly))
    {
        return false;
    }

    QTextStream outStream(&outFile);
    outStream << str;
    outStream.flush();

    outFile.close();

    return true;
}
