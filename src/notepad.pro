TEMPLATE = app
TARGET = notepad

qtHaveModule(printsupport): QT += printsupport
requires(qtConfig(fontdialog))

SOURCES += \
    controller.cpp \
    main.cpp\
    notepad.cpp

HEADERS += notepad.h \
    controller.h

FORMS += notepad.ui

RESOURCES += \
    notepad.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tutorials/notepad
INSTALLS += target

