#include "StdAfx.h"
#include "scannerfileinfo.h"

CScannerFileInfo::CScannerFileInfo()
{
}

CScannerFileInfo::CScannerFileInfo(char pDiskName, CString pFileName, CString pFileSubfix, long pFileSize, CString pDate, CString pTime)
    : diskName(pDiskName),
    fileName(pFileName),
    fileSubfix(pFileSubfix),
    fileSize(pFileSize),
    date(pDate),
    time(pTime)
{
}

CScannerFileInfo::CScannerFileInfo(const CScannerFileInfo &info2)
    : diskName(info2.diskName),
    fileName(info2.fileName),
    fileSubfix(info2.fileSubfix),
    fileSize(info2.fileSize),
    date(info2.date),
    time(info2.time)

{

}

CScannerFileInfo& CScannerFileInfo::operator=(const CScannerFileInfo& info2)
{
    this->date.Format(info2.date);
    this->diskName = info2.diskName;
    this->fileName.Format(info2.fileName);
    this->fileSize = info2.fileSize;
    this->fileSubfix.Format(info2.fileSubfix);
    this->time.Format(info2.time);
    return *this;
}
