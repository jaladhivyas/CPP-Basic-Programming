QT += core
QT -= gui

CONFIG += c++11

TARGET = CPP_Programming
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    main.cpp \
    Relationships/association.cpp \
    Relationships/aggregation.cpp


# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += Basic \
    Basic/inheritance_basic.h \
    Basic/memory_management.h \
    Basic/memory_management_set_2.h \
    Basic/operator_overloading_basic.h \
    Basic/operator_overloading_set_2.h \
    Basic/pointers_arithmetic.h \
    Basic/preprocessor_directives.h \
    Basic/recursive_routines.h \
    Basic/inheritance_basic.h \
    Basic/memory_management.h \
    Basic/memory_management_set_2.h \
    Basic/operator_overloading_basic.h \
    Basic/operator_overloading_set_2.h \
    Basic/pointers_arithmetic.h \
    Basic/preprocessor_directives.h \
    Basic/recursive_routines.h \
    Relationships/temp.h
