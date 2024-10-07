#include <iostream>
#include <cmath>
using namespace std;

int square(int a) {
    int sqr = a * a;
    return sqr;
}

float sqrti(float a) {
    if (a > 0) {
        float sqrtq = sqrt(a);
        return sqrtq;
    }
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

int countAdd(int *a, int size) {
    int b = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            b += 1;
        }
        else {
            b += 0;
        }
    }
    return b;

    delete a;
}

int countaddvalue(int a, int *arr) {
    int c = a + arr[a];
    cout << "Your value = " << a << " " << "Value in array = " << arr[a] << endl;
    return c;
    
    delete arr;
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

int compareStrings(int size_a, int size_b) {
    if (size_a == size_b) {
        cout << 0;
    }
    else if (size_a < size_b) {
        cout << -1;
    }
    else {
        cout << 1;
    }
}

int *findCommonElements(const int *a, int size_a, const int *b, int size_b, int &commonSize) {
     int* commonElements = new int[size_a < size_b ? size_a : size_b]; 
    commonSize = 0;
    for (int i = 0; i < size_a; ++i) {
        for (int j = 0; j < size_b; ++j) {
            if (a[i] == b[j]) {
                commonElements[commonSize++] = a[i];
                break; 
            }
        }
    }
    return commonElements;
}

int rotateArray(int *a, int size, int steps) {
    steps = steps % size; 
    if (steps < 0) {
        steps += size; 
    }
    int* temp = new int[size];
    for (int i = 0; i < size; ++i) {
        temp[i] = a[(i + steps) % size];
    }
    for (int i = 0; i < size; ++i) {
        a[i] = temp[i];
    }
    delete[] temp; 
}

int *mergeAndCompare(const int* arr1, int size1, const int* arr2, int size2, int& mergedSize) {
    if (size1 != size2) {
        mergedSize = -1;
        return nullptr;
    }

    mergedSize = size1 + size2;
    int* mergedArray = new int[mergedSize];
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = arr2[i];
    }
    return mergedArray; 
}

int main() {
    // #1
    // int a;
    // cout << "Input integer value" << endl;
    // cin >> a;
    // cout << "Square value = " << square(a);

    // #2
    // float a;
    // cout << "Input value" << endl;
    // cin >> a;
    // if (a <= 0) {
    //     cout << "Negative argument" << endl;
    //     return 0;
    // }
    // else {
    //     cout << "Sqrt == " << sqrti(a);
    // }

    // #3
    // float a;
    // float b;
    // bool c;
    // cout << "Input value a" << endl;
    // cin >> a;
    // cout << "Input value b" << endl;
    // cin >> b;
    // cout << "Choose - 1: addition, 0: multiply" << endl;
    // cin >> c;
    // if (c == 1) {
    //     cout << "Addition is == " << MultiplyorAdd(a, b, c);
    // }
    // else {
    //     cout << "Multiply is == " << MultiplyorAdd(a, b, c);
    // }

    // #4
    // int size;
    // cout << "Input array size" << endl;
    // cin >> size;
    // int *arr = new int[size];
 
    // cout << "Input values" << endl;
 
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // int count = countAdd(arr, size);
    // cout << "Even-numbered values = " << count << endl;

    // delete []arr;

    // #5
    // int a;
    // cout << "Input value" << endl;
    // cin >> a;
    // int size;
    // cout << "Input array size" << endl;
    // cin >> size;
    // int *arr = new int[size];

    // cout << "Input values" << endl;

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // int counta = countaddvalue(a, arr);

    // cout << "Sum = " << counta << endl;

    // delete arr;

    // #6
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

    // #7
    // char a[] = {"abcde"};
    // int size_a = sizeof(a) / sizeof(a[0]);
    // char b[] = {"abcde"};
    // int size_b = sizeof(b) / sizeof(b[0]);

    // compareStrings(size_a, size_b);

    // #8
    // int a[] = {1, 2, 3, 4, 5};
    // int size_a = sizeof(a) / sizeof(a[0]);
    // int b[] = {5, 6, 12, 3, 4};
    // int size_b = sizeof(b) / sizeof(b[0]);

    // int commonSize;

    // int *CommonElements = findCommonElements(a, size_a, b, size_b, commonSize);

    // cout << "Common Elements = " << endl;

    // for (int i = 0; i < commonSize; i++) {
    //     cout << CommonElements[i] << endl;
    // }

    // delete CommonElements;

    // #9
    // int a[] = {1, 2, 3, 4, 5};
    // int size = sizeof(a) / sizeof(a[0]);
    // int steps;
    // cout << "Input value = ";
    // cin >> steps;

    // rotateArray(a, size, steps);

    // cout << "Massive" << endl;
    // for (int i = 0; i < size; i++) {
    //     cout << a[i] << " ";
    // }

    // #10
    int size1 = 3;
    int size2 = 3;
    int* arr1 = new int[size1] {1, 2, 3};
    int* arr2 = new int[size2] {4, 5, 6};

    int mergedSize;
    int* mergedArray = mergeAndCompare(arr1, size1, arr2, size2, mergedSize);

    if (mergedSize == -1) {
        cout << "Error massive" << endl;
    }
    else {
        cout << "Union massive ";
        for (int i = 0; i < mergedSize; ++i) {
            cout << mergedArray[i] << " ";
        }
        cout << endl;
    }
    delete[] arr1;
    delete[] arr2;
    if (mergedArray != nullptr) {
        delete[] mergedArray;
    }

    return 0;
}