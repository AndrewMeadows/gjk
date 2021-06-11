//
//  gjkTests.h
//
//  Created by Andrew Meadows 2018.08.06
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#pragma once

#include <QtTest/QtTest>

// Testcase class
class gjkTests : public QObject {
    Q_OBJECT
private slots:
    void intersectCubes() const;
    void intersectIrregularOctagons() const;
    void containsPoint() const;
};

