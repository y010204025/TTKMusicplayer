#ifndef MUSICTRANSFROMWIDGET_H
#define MUSICTRANSFROMWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QDialog>
#include <QMouseEvent>
#include <QTimer>
#include <QDir>

#include "musicobject.h"
#include "musicuiobject.h"
#include "musicabstractmovedialog.h"

class QMovie;
class QProcess;

namespace Ui {
class MusicTransformWidget;
}

class MUSIC_TOOLSET_EXPORT MusicTransformWidget : public MusicAbstractMoveDialog
{
    Q_OBJECT
public:
    explicit MusicTransformWidget(QWidget *parent = 0);
    virtual ~MusicTransformWidget();

Q_SIGNALS:

public Q_SLOTS:
    void initInputPath();
    void initOutputPath();
    void startTransform();
    void transformFinish(int index);
    void folderBoxChecked(bool check);
    virtual int exec();

protected:
    QString getTransformSongName() const;
    Ui::MusicTransformWidget *ui;

    QFileInfoList getFileList(const QString &path);
    void initControlParameter() const;
    bool processTransform(const QString &para) const;
    void setCheckedControl(bool enable) const;

    QProcess *m_process;
    QMovie *m_movie;
    QStringList m_path;

};

#endif // MUSICTRANSFROMWIDGET_H
