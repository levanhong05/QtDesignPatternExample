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

#ifndef SINGLETON_H
#define SINGLETON_H

#include <QObject>

class Singleton : public QObject
{
    Q_OBJECT
public:
    static Singleton *getInstance();

private:
    explicit Singleton(QObject *parent = nullptr);

    ~Singleton();

    /* "= delete" is a special keyword in C ++.
     * It prevents the compiler do not create the functions with the keyword "= delete" automatically.
     * For example, when we use "= delete" for copy constructor,
     * it means that we tell the compiler that we want to delete the copy constructor function so don't create it.
    */
    Singleton(const Singleton &) = delete;

    Singleton & operator=(const Singleton &) = delete;

private:
    static Singleton* _instance;

};

#endif // SINGLETON_H
