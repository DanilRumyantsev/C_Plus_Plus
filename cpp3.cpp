#include <iostream>
#include <string>
using namespace std;
 
// #ДЗ_4
 
int main() {
    // #1
    int array[7] = { 2, 3, 4, 5, 2, 8, 10 };
    
    for (int i = 0; i < 7; i++) {
        cout << array[i] << endl;
    }
 
    // #2
    int arr[] = { 500, 4, 24, 15, 100, 105 };
    int sum = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
 
    for (int i = 1; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum elemnts massive = " << sum;
 
    // #3
    int n;
    int arr[] = {500, 4, 24, 15, 100, 105};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Input value = ";
    cin >> n;
 
    for (int i = 0; i < size; i++) {
        if (arr[i] % n == 0) {
            cout << "Values multiplies your value = " << arr[i] << endl;
        }
    }
 
    // #4
    int arr[] = { 5, 4, 3, 4, 9 };
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
 
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Substraction max and min = " << max - min << endl;
 
    // #5
    int arr[] = { 5, 4, 3, 4, 9 };
    int max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
 
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            if (max == arr[i]) {
                cout << "Position max value = " << i;
            }
        }
    }
 
    // #6
    int size = 10;
    int *a = new int[size];
    int sum = 0;
 
    for (int i = 0; i < size; ++i) {
        a[i] = i;
    }
    
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    cout << "Sum of dynamic massive = " << sum;
    delete a;
    return 0;
 
    // #7
    int size = 5;
    int *a = new int[size];
 
    cout << "Input values" << endl;
 
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
 
    cout << "Reverse values" << endl;
 
    for (int i = size - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    delete a;
 
    // #8
    int str = 0;
    char stroka[] = { "AaBbCcDdEeFfGgggggg" };
    int size = sizeof(stroka) / sizeof(stroka[0]);
 
    for (int i = 0; i < size - 1; i++) {
        if (stroka[i] == 'A') {
            str++;
        }
 
        if (stroka[i] == 'B') {
            str++;
        }
 
        if (stroka[i] == 'C') {
            str++;
        }
 
        if (stroka[i] == 'D') {
            str++;
        }
 
        if (stroka[i] == 'E') {
            str++;
        }
 
        if (stroka[i] == 'F') {
            str++;
        }
 
        if (stroka[i] == 'G') {
            str++;
        }
 
    }
    cout << "Words = " << str;
 
    // #9
    char stroka[] = { "Aaa1323#aa" };
    int size = sizeof(stroka) / sizeof(stroka[0]);
    int counter = 0;
 
    for (int i = 0; i < size - 1; i++) {
        if (stroka[i] == 'A') {
            counter++;
        }
 
        if (stroka[i] == 'a') {
            counter++;
        }
    }
    cout << "Count of A = " << counter;
 
    // #10
    char stroka[] = { "aaaabbbbccccdddd" };
    int size = sizeof(stroka) / sizeof(stroka[0]);
 
    for (int i = 0; i < size - 1; i++) {
        if (stroka[i] == 'a') {
            stroka[i] = 'A';
        }
 
        if (stroka[i] == 'b') {
            stroka[i] = 'B';
        }
 
        if (stroka[i] == 'c') {
            stroka[i] = 'C';
        }
 
        if (stroka[i] == 'd') {
            stroka[i] = 'D';
        }
    }
    cout << stroka;
}