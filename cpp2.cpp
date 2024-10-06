//ДЗ_3
#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    // #1
    int day;
    cout << "Input the day, 1 - Monday, 2 - Tuesday, 3 - Wednesday, 4 - Thursday, 5 - Friday , 6 - Saturday, 7 - Sunday. = " << endl;
    cin >> day;
 
    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "You don`t choice the day or your choice more or less 1/7" << endl;
        break;
    }
 
    // #2
    int first = 2;
    int second = pow(2, 10);
    while (first != second) {
        first = first * 2;
    }
    cout << "2^10 == " << first << endl;
 
    return 0;
 
    // #3
    int n, factorial = 1;
 
    cout << "Input value ";
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
 
    cout << "Factorial " << n << " is " << factorial << endl;
 
    return 0;
 
    // #4
    int n;
    int i = 0;
    cout << "Input value = ";
    cin >> n;
    cout << "Values is = ";
 
    for (int z = 0; z < n; z++)
        if (z % 2 == i)
        {
            cout << z << endl;
        }
    return 0;
 
    // #5
    int x = 10;
 
    for (int y = 0; x > y; x -= 2) {
        cout << x << endl;
    }
    return 0;
 
    // #6
    int i = 1;
    int sum = 0;
 
    do {
        sum += i;
        i++;
    } while (i <= 1000);
    cout << sum;
    return 0;
 
    // #7
    int c;
    bool prost = true;
    cout << "Input value = ";
    cin >> c;
 
    if (c < 2) {
        prost = false;
        cout << "Ne prostoe";
    }
    else {
        for (int i = 2; i * i < c; i++) {
            if (c % i == 0) {
                prost = false;
                break;
            }
        }
    }
 
    if (prost) {
        cout << c << " prost";
    }
    else {
        cout << c << " ne prost";
    }
    return 0;
 
    // #8
    int operation;
    int x;
    int y;
    int sum;
    int mul;
    int sub;
    int div;
    int fact;
    int step;
    cout << "Input the type operation" << endl;
    cout << "1 - addition, 2 - substraction, 3 - multiply, 4 - division, 5 - factorial, 6 - stepen =" << endl;
    cin >> operation;
 
    if (operation == 1) {
        cout << "Input first value" << endl;
        cin >> x;
        cout << "Input second value" << endl;
        cin >> y;
        sum = x + y;
        cout << sum;
    }
    else if (operation == 2) {
        cout << "Input first value" << endl;
        cin >> x;
        cout << "Input second value" << endl;
        cin >> y;
        sub = x - y;
        cout << sub;
    }
    else if (operation == 3) {
        cout << "Input first value" << endl;
        cin >> x;
        cout << "Input second value" << endl;
        cin >> y;
        mul = x * y;
        cout << mul;
    }
    else if (operation == 4) {
        cout << "Input first value" << endl;
        cin >> x;
        cout << "Input second value" << endl;
        cin >> y;
        div = x / y;
        cout << div;
    }
    else if (operation == 5) {
        int n;
        int factorial = 1;
        cout << "Input value ";
        cin >> n;
 
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
 
        cout << "Factorial " << n << " is " << factorial << endl;
 
        return 0;
    }
    else if (operation == 6) {
        int first;
        cout << "Input value" << endl;
        cin >> first;
        cout << "Input step" << endl;
        cin >> step;
        int second = pow(first, step);
 
        cout << second << endl;
 
        return 0;
    }
    else {
        cout << "Incorrect operation" << endl;
    }
}