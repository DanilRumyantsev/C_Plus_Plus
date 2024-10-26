#include "maxelement.h"
#include <iostream>
using namespace std;

int findMaxElement(int* array, int size, int (*compare)(int, int)) {
    if (size == 0) {
        cout << "Array size must be greater than zero";
    }

    int maxElement = array[0];
    for (int i = 1; i < size; i++) {
        if (compare(array[i], maxElement) > 0) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

int compareMax(int a, int b) {
    return a - b;
}
