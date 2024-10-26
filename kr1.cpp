#include <iostream>
#include <cmath>
#include "resizeArray.h"
#include "resizeArray.cpp"
#include "maxelement.h"
#include "maxelement.cpp"
using namespace std;

void reverseArray(int *arr, int size) {
    cout << "Reverse massive = " << endl;

    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    delete arr;
}

void sqrti(float x) {
    if (x <= 0) {
        cout << "Negative argument";
    }
    else {
        cout << "Sqrt = " << sqrt(x);
    }
}

int countskipvalue(int n, int *arr, int size) {
    n += 1;
    arr[n] = 0;

    cout << "Value = " << n << endl;
    cout << "Massive = ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return n;
    return *arr;
}

float MultiplyorAdd(float a, float b, bool c) {
    if (c == true) {
        float d = a + b;
        return d;
    }
    else {
        float d = a * b;
        return d;
    }
}

int main() {
    // 1. Напишите программу по развороту динамического массива.
    // int size;
    // cout << "Input size massive = ";
    // cin >> size;
    // int *arr = new int[size];

    // cout << "Input values massive" << endl;

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // cout << "Your massive = " << endl;

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // reverseArray(arr, size);
    
    // delete arr;

    // 2. Подсчитайте количество прописных (заглавных) букв в строке.
    // int count_str = 0;
    // int count_zag = 0;
    // char str[] = {"aaaaAAAAaaaaAAAAaaaAAaAaaaAAAAAAa"};
    // int size = sizeof(str) / sizeof(str[0]);
    // for (int i = 0; i < size; i++) {
    //     if (str[i] == 'A') {
    //         count_zag++;
    //     }
    //     else if (str[i] == 'a') {
    //         count_str++;
    //     }
    // }
    // cout << "Zag = " << count_zag << endl;
    // cout << "Str = " << count_str << endl;

    // 3. Напишите программу, которая запрашивает у пользователя целое число n и проверяет, является ли оно простым.
    // Простое число — это число, которое делится только на себя и на единицу.
    // Используйте цикл for и оператор break для прерывания цикла, если найден делитель числа.
    // int a;
    // bool prost = true;
    // cout << "Input value = ";
    // cin >> a;
 
    // for (int i = 2; i * i < a; i++) {
    //     if (a % i == 0) {
    //         prost = false;
    //         break;
    //     }
    // }
 
    // if (prost) {
    //     cout << a << " prost";
    // }
    // else {
    //     cout << a << " ne prost";
    // }

    // 4. Дан массив int array[7] = {2, 3, 4, 5, 2, 8, 10};. Выведите на консоль все его элементы.
    // int array[7] = {2, 3, 4, 5, 2, 8, 10};

    // for (int i = 0; i < 7; i++) {
    //     cout << array[i] << " ";
    // }

    // 5. Напишите программу, которая запрашивает у пользователя целое число n и выводит на экран все четные числа от 0 до n включительно.
    // int a;
    // cout << "Input value" << endl;
    // cin >> a;

    // for (int i = 0; i < a; i++) {
    //     if (i % 2 == 0) {
    //         cout << i << " , ";
    //     }
    // }

    // if (a % 2 == 0) {
    //     cout << a;
    // }

    // 6. Напишите функцию sqrti, которая принимает вещественное число x и возвращает квадратный корень из x.
    // Если x отрицательное, то функция должна вывести исключение типа с сообщением “Negative argument”.
    // float x;
    // cout << "Input positive value = ";
    // cin >> x;

    // sqrti(x);

    // 7. Напишите функцию, которая принимает два параметра по ссылке: целое число n и массив целых чисел arr.
    //  Функция должна увеличить n на 1 и заменить n-й элемент массива на 0.
    // int n;
    // cout << "Input value" << endl;
    // cin >> n;
    // int size;
    // cout << "Input array size" << endl;
    // cin >> size;
    // int *arr = new int[size];

    // cout << "Massive = ";
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }
    // cout << endl;

    // countskipvalue(n, arr, size);

    // 8. Напишите определение функции multiplyOrAdd, которая принимает на вход три аргумента: булевский и два вещественных и возвращает вещественный тип.
    // Внутри тела функции должно быть произведено умножение или сложение переданных вещественных чисел в зависимости от значения булевской переменной.
    // Выведите значение в консоль.
    // float a;
    // cout << "Input first value" << endl;
    // cin >> a;
    // cout << "Input second value" << endl;
    // float b;
    // cin >> b;
    // cout << "Input third value: 1 - addition, 0 - multiply" << endl;
    // bool c;
    // cin >> c;

    // if (c) {
    //     cout << "Addition = " << MultiplyorAdd(a, b, c);
    // }
    // else {
    //     cout << "Multiply = " << MultiplyorAdd(a, b, c);
    // }

    // 9. Реализуйте перегруженные функции `resizeArray’, которые изменяют размер массива целых чисел и массива вещественных чисел.
    int intArraySize = 5;
    int* intArray = new int[intArraySize] {1, 2, 3, 4, 5};

    cout << "Integer array ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    int newIntArraySize = 2;
    intArray = resizeArray(intArray, intArraySize, newIntArraySize);
    intArraySize = newIntArraySize;

    cout << "Modify integer array:  ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    delete[] intArray;

    int doubleArraySize = 5;
    double* doubleArray = new double[doubleArraySize] {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Double array:  ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    int newDoubleArraySize = 2;
    doubleArray = resizeArray(doubleArray, doubleArraySize, newDoubleArraySize);
    doubleArraySize = newDoubleArraySize;

    cout << "Modify double array:  ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    delete[] doubleArray; 

    return 0;


    // 10. Напишите функцию с передачей функции как аргумента в другую функцию по указателю для нахождения максимального элемента в массиве.
    // Используйте ее в main. Разделите программу на заголовочный и исполняемый файлы.
    // int array[] = {3, 1, 4, 1, 5, 9, 11, 6, 5, 3, 5};
    // int size = sizeof(array) / sizeof(array[0]);

    // int maxElement = findMaxElement(array, size, compareMax);
    // cout << "Maximum element in the array is: " << maxElement << endl;

    // return 0;
}