HEADERS      += dialog.h
SOURCES      += dialog.cpp  main.cpp
FORMS   += display.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/wiggly
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS wiggly.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/wiggly
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000C607
    include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
}


DESTDIR      = bin
unix {
MOC_DIR      = /tmp/$${TARGET}
RCC_DIR      = /tmp/$${TARGET}
OBJECTS_DIR  = /tmp/$${TARGET}
}

win {
MOC_DIR      = c:/tmp/$${TARGET}
RCC_DIR      = c:/tmp/$${TARGET}
OBJECTS_DIR  = c:/tmp/$${TARGET}
}

INCLUDEPATH += ../../lib/include

QMAKE_CXXFLAGS_RELEASE  = -O0

message ("Host = " $${QMAKE_HOST.arch})

unix {
contains(QMAKE_HOST.arch, x86_64):{
    LIBS        += -L../../lib/linux64 -ludp
}

contains(QMAKE_HOST.arch, i686):{
    LIBS        += -L../../lib/linux32 -ludp
}
}

win32 {
    LIBS        += -L../../lib/win32 -ludp
#   QMAKE_POST_LINK += "copy ..\..\lib\win32\*.* bin  /y /q"
}

unix {
    DEFINES += LINUX_WAY
}


