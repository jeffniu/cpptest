//
//  RMQ.cpp
//  CppTest
//
//  Created by GUANGYUAN NIU on 27/6/15.
//  Copyright (c) 2015 ngy. All rights reserved.
//

#include "RMQ.h"

int rmq_simple(int array[], int i, int j) {
    int min = i;
    for (int k = i; k <= j; k++) {
        if (array[k] < array[min]) min = k;
    }
    return min;
}