//
//  main.cpp
//  UnitTest
//
//  Created by GUANGYUAN NIU on 27/6/15.
//  Copyright (c) 2015 ngy. All rights reserved.
//

#include <iostream>
#include "calc.h"
#include "gtest/gtest.h"

TEST(Calc, Add) {
    Calc calc;
    EXPECT_EQ(2, calc.add(1, 1));
}

int main(int argc, char * argv[]) {
    // insert code here...
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
