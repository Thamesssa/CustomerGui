#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <QString>

class FileWriter
{
public:
    FileWriter(QString fname);
    bool write(QString str) const;

private:
    QString filename;
};

#endif // FILEWRITER_H
