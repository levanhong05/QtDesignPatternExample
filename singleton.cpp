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

#include "singleton.h"

Singleton * Singleton::_instance = nullptr;

Singleton *Singleton::getInstance()
{
    if (!_instance) {
        _instance = new Singleton;
    }

    return _instance;
}

Singleton::Singleton(QObject *parent) : QObject(parent)
{
    //Implement your constructor
}

Singleton::~Singleton()
{
    //Implement your deconstructor
}
