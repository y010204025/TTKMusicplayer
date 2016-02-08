#ifndef MUSICUTILS
#define MUSICUTILS

#include <QWidget>
#include "musicobject.h"

namespace MusicUtils
{
    static void dirIsExist(const QString& name)
    {
        QDir dir;
        if(!dir.exists(name))
        {
            dir.mkdir(name);
        }
    }

    static void checkTheDirectoryExist()
    {
        dirIsExist(MusicObject::getAppDir() + LRC_DOWNLOAD);
        dirIsExist(MusicObject::getAppDir() + MUSIC_DOWNLOAD);
        dirIsExist(MusicObject::getAppDir() + MOVIE_DOWNLOAD);
        dirIsExist(MusicObject::getAppDir() + DATA_CACHED);
        dirIsExist(MusicObject::getAppDir() + THEME_DOWNLOAD);
        dirIsExist(MusicObject::getAppDir() + ART_DOWNLOAD);
        dirIsExist(MusicObject::getAppDir() + TRANS_PLUGINS);
        dirIsExist(MusicObject::getAppDir() + ART_BG);
        dirIsExist(MusicObject::getAppDir() + TR_LANGUAGE);
    }

    static bool checkTheFileExist()
    {
        return QFile::exists(MusicObject::getAppDir() + DOWNLOADINFO) &&
               QFile::exists(MusicObject::getAppDir() + DARABASEPATH) &&
               QFile::exists(MusicObject::getAppDir() + USERPATH) &&
               QFile::exists(MusicObject::getAppDir() + COFIGPATH) &&
               QFile::exists(MusicObject::getAppDir() + MUSICPATH) &&
               QFile::exists(MusicObject::getAppDir() + MUSICSEARCH) &&
               QFile::exists(MusicObject::getAppDir() + NETDADIOPATH);
    }

    static QString getLanguageName(int index)
    {
        QString lan(MusicObject::getAppDir() + TR_LANGUAGE);
        switch(index)
        {
            case 0 : return lan.append("cn.ln");
            case 1 : return lan.append("cn_c.ln");
            case 2 : return lan.append("en.ln");
            default: return QString();
        }
    }

    static void setLabelFont(QWidget *widget, int size)
    {
        QFont font = widget->font();
        font.setPointSize(size);
        widget->setFont(font);
    }

    static QString fileSize2Label(qint64 size)
    {
        if( size < 1024)
        {
            return QString("%1").arg(size);
        }
        else if( 1024 <= size && size < 1024*1024)
        {
            return QString("%1").arg((qint64)(size*1.0/1024*100)/100.0);
        }
        else if( 1024*1024 <= size && size < 1024*1024*1024)
        {
            return QString("%1").arg((qint64)(size*1.0/1024/1024*100)/100.0);
        }
        else
        {
            return QString();
        }
    }

    static QString fileSize2Normal(qint64 size)
    {
        QString label = fileSize2Label(size);
        if( size < 1024)
        {
            return QString("%1 Byte").arg(label);
        }
        else if( 1024 <= size && size < 1024*1024)
        {
            return QString("%1 KByte").arg(label);
        }
        else if( 1024*1024 <= size && size < 1024*1024*1024)
        {
            return QString("%1 MByte").arg(label);
        }
        else
        {
            return QString();
        }
    }

    static qreal fileSizeByte2KByte(qint64 size)
    {
        return size / 1024.0;
    }

    static qreal fileSizeByte2MByte(qint64 size)
    {
        return fileSizeByte2KByte(size) / 1024.0;
    }

    static quint64 dirSize(const QString &dirName)
    {
        quint64 size = 0;
        if(QFileInfo(dirName).isDir())
        {
            QDir dir(dirName);
            QFileInfoList list = dir.entryInfoList(QDir::Files | QDir::Dirs |  QDir::Hidden |
                                                   QDir::NoSymLinks | QDir::NoDotAndDotDot);
            foreach(QFileInfo fileInfo, list)
            {
                if(fileInfo.isDir())
                {
                    size += dirSize(fileInfo.absoluteFilePath());
                }
                else
                {
                    size += fileInfo.size();
                }
            }
        }
        return size;
    }

    static void checkCacheSize(quint64 cacheSize, bool disabled, const QString &path)
    {
        if(disabled)
        {
            quint64 size = dirSize( path );
            if( size > cacheSize)
            {
                QFileInfoList fileList = QDir(path).entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);
                foreach(QFileInfo fileInfo, fileList)
                {
                    size -= fileInfo.size();
                    QFile::remove(fileInfo.absoluteFilePath());
                    if(size <= cacheSize)
                    {
                        break;
                    }
                }
            }
        }
    }

}
#endif // MUSICUTILS

