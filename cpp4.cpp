#include <iostream>
using namespace std;
 
int main() {
    //ДЗ_5
    // #1
    int number;
    cout << "Input value = ";
    cin >> number;
 
    cout << "You input the = " << number;
 
    // #2
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
        cout << arr[i] << " ";
    }
    return 0;
 
    // #3
    int count = 0;
    while (count < 5) {
        cout << count << endl;
        count++;
    }
    return 0;
 
    // #4
    float num;
    cout << "Input value = ";
    cin >> num;
    int numInt = int(num);
    cout << "Integer: " << numInt << endl;
 
    if (numInt = 5) {
        cout << "numInt is 5";
    }
    return 0;
 
    // #5
    int sum;
    sum = 0;
    int numArray[5];
    for (int i = 0; i < 5; i++) {
        numArray[i] = i * 2;
    }
 
    cout << "Array values: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numArray[i] << endl;
    }
    return 0;
 
    // #6
    int x = 10;
    float y = 3.14;
    char myChar = 'A';
    bool isTrue = true;
 
    if (x > 5) {
        cout << "x is greater than 5" << endl;
    }
    else {
        cout << "x is less or equal to 5" << endl;
    }
 
    cout << "Value of y: " << y << endl;
    cout << "Character: " << myChar << endl;
    cout << "Boolean: " << isTrue << endl;
 
    return 0;
 
    // #7
    unsigned int uVal = 10;
    signed int sVal = -20;
 
    cout << "Unsigned Value: " << uVal << endl;
    cout << "Signed Value: " << sVal << endl;
 
    int user_input;
    cout << "Enter a number: ";
    cin >> user_input;
 
    if (user_input < 0) {
        cout << "Negative number!" << endl;
    }
    else {
        cout << "Positive number!" << endl;
    }
 
    return 0;
 
    // #8
    int a = 10;
    int b = 20;
    int *ptrA;
    int *ptrB;
 
    ptrA = &a;
    ptrB = &b;
 
    cout << "Value of a: " << *ptrA << endl;
    cout << "Value of b: " << *ptrB << endl;
 
    *ptrA = *ptrB;
    cout << "After assigning b to a: " << *ptrA << endl;
 
    int *ptrC = new int;
    *ptrC = 5;
    cout << "Value of c: " << *ptrC << endl;
 
    delete ptrC;
    cout << "End of program." << endl;
 
    return 0;
 
    //# 9
    int num = 5;
    int *pNum;
    pNum = &num;
 
    cout << "Number before: " << *pNum << endl;
 
    *pNum = 10;
 
    cout << "Number after: " << *pNum << endl;
 
    float *pFloat = new float;
    *pFloat = 5.5;
 
    cout << "Float value: " << *pFloat << endl;
 
    int arr[5] = { 1, 2, 3, 4, 5 };
 
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
 
    cout << endl;
 
    delete pFloat;
    return 0;
 
    // #10
    float fValue = 3.14;
    float *pfValue;
 
    pfValue = &fValue;
 
    cout << "Float value: " << *pfValue << endl;
 
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *pArr;
 
    pArr = arr;
 
    for (int i = 0; i < 5; i++) {
        cout << pArr[i] << " ";
    }
 
    cout << endl;
 
    return 0;
}