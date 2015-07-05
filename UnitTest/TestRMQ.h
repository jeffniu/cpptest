//
//  TestRMQ.h
//  CppTest
//
//  Created by GUANGYUAN NIU on 5/7/15.
//  Copyright (c) 2015 ngy. All rights reserved.
//

#ifndef __CppTest__TestRMQ__
#define __CppTest__TestRMQ__

#include <stdio.h>

#include "calc.h"
#include "gtest/gtest.h"
#include "rmq.h"
#include "RandomGenerator.h"

TEST(Calc, Add) {
    Calc calc;
    EXPECT_EQ(2, calc.add(1, 1));
}


TEST(RMQ_TIMING, RMQ_SIMPLE_Random_Million) {
    int amount = 1000000;
    int* array = new int[amount];
    for (int i = 0; i < amount; i++) {
        array[i] = generateUniformInt(0, 10000);
    }
    rmq_simple(array, 0, amount-1);
}

#endif /* defined(__CppTest__TestRMQ__) */

