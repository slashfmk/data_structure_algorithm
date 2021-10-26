//
// Created by Yannick Fumukani on 10/23/21.
//
#include <climits>
#include "headers/arrayUtil.h"

long largerNumber(int inputArray[], int size) {
    long largerN = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (inputArray[i] > largerN) {
            largerN = inputArray[i];
        }
    }

    return largerN;
}

long smallerNumber(int inputArray[], int size) {
    long smallerN = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (inputArray[i] < smallerN) {
            smallerN = inputArray[i];
        }
    }

    return smallerN;
}
