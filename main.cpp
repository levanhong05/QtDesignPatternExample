/****************************************************************************
**
** Copyright (C) 2019 Eric Lee.
** Contact: levanhong05@gmail.com
** Company: Freelancer
**
** This file is part of the Qt Design Pattern Example project.
**
**All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
**
****************************************************************************/

#include <QObject>
#include <QApplication>

#include <QDebug>

#include "singleton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Singleton *firstInstance = Singleton::getInstance();
    qDebug() << &*firstInstance;
    Singleton *secondInstance = Singleton::getInstance();
    qDebug() << &*secondInstance;

    return a.exec();
}
