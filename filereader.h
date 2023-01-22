#ifndef FILEREADER_H
#define FILEREADER_H

#include <QString>

class FileReader
{
public:
    FileReader(QString fname);
    QString read() const;

private:
    QString filename;
};

#endif // FILEREADER_H
