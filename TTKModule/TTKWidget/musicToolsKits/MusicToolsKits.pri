# =================================================
# * This file is part of the TTK Music Player project
# * Copyright (C) 2015 - 2018 Greedysky Studio
#
# * This program is free software; you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation; either version 3 of the License, or
# * (at your option) any later version.
#
# * This program is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
#
# * You should have received a copy of the GNU General Public License along
# * with this program; If not, see <http://www.gnu.org/licenses/>.
# =================================================

INCLUDEPATH += $$PWD

!contains(CONFIG, MUSIC_NO_MSVC_LINK_NEED){
HEADERS  += \
    $$PWD/musicsongstoolboxwidget.h \
    $$PWD/musicsongssummariziedwidget.h \
    $$PWD/musictoolsetswidget.h \
    $$PWD/musicconnectmobilewidget.h \
    $$PWD/musicconnecttransferwidget.h \
    $$PWD/musicconnecttransfertablewidget.h \
    $$PWD/musicwebmusicradiowidget.h \
    $$PWD/musicwebmusicradioplaywidget.h \
    $$PWD/musicwebdjradiocategorywidget.h \
    $$PWD/musicwebdjradiowidget.h \
    $$PWD/musicwebdjradiofoundwidget.h \
    $$PWD/musicwebdjradioinfowidget.h \
    $$PWD/musicwebmvradiofoundwidget.h \
    $$PWD/musicwebmvradiofoundcategorypopwidget.h \
    $$PWD/musicwebmvradioinfowidget.h \
    $$PWD/musicwebradioview.h \
    $$PWD/musiccloudsharedsongwidget.h \
    $$PWD/musiccloudfilemanagerdialog.h \
    $$PWD/musiccloudtablewidget.h \
    $$PWD/musicdownloadrecordwidget.h \
    $$PWD/musiccloudfileinformationwidget.h

}

contains(CONFIG, MUSIC_BUILD_LIB){
SOURCES += \
    $$PWD/musicsongstoolboxwidget.cpp \
    $$PWD/musicsongssummariziedwidget.cpp \
    $$PWD/musictoolsetswidget.cpp \
    $$PWD/musicconnectmobilewidget.cpp \
    $$PWD/musicconnecttransferwidget.cpp \
    $$PWD/musicconnecttransfertablewidget.cpp \
    $$PWD/musicwebmusicradiowidget.cpp \
    $$PWD/musicwebmusicradioplaywidget.cpp \
    $$PWD/musicwebdjradiocategorywidget.cpp \
    $$PWD/musicwebdjradiowidget.cpp \
    $$PWD/musicwebdjradiofoundwidget.cpp \
    $$PWD/musicwebdjradioinfowidget.cpp \
    $$PWD/musicwebmvradiofoundwidget.cpp \
    $$PWD/musicwebmvradiofoundcategorypopwidget.cpp \
    $$PWD/musicwebmvradioinfowidget.cpp \
    $$PWD/musicwebradioview.cpp \
    $$PWD/musiccloudsharedsongwidget.cpp \
    $$PWD/musiccloudfilemanagerdialog.cpp \
    $$PWD/musiccloudtablewidget.cpp \
    $$PWD/musicdownloadrecordwidget.cpp \
    $$PWD/musiccloudfileinformationwidget.cpp

}
