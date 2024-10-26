#ifndef MAX_ELEMENT_H
#define MAX_ELEMENT_H

// Функция для нахождения максимального элемента в массиве
int findMaxElement(int* array, int size, int (*compare)(int, int));

// Компаратор для нахождения максимального элемента
int compareMax(int a, int b);

#endif // MAX_ELEMENT_H
