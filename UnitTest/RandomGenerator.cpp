//
//  RandomGenerator.cpp
//  CppTest
//
//  Created by GUANGYUAN NIU on 27/6/15.
//  Copyright (c) 2015 ngy. All rights reserved.
//

#include "RandomGenerator.h"
#include <random>

int generateUniformInt(int min, int max) {
    std::mt19937 mt(1729);
    std::uniform_int_distribution<int> dist(min, max);
    return dist(mt);
}