#include "copyArrayh.h"

void copyArray(int* dest, const int* src, int size) {
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}

void copyArray(float* dest, const float* src, int size) {
    for (int i = 0; i < size; ++i) {
        dest[i] = src[i];
    }
}