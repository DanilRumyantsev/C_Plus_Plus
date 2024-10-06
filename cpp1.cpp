#include <iostream>
using namespace std;
#define CUBE(x) (x*x*x)
 
int main() {
 
    // #1
    int number = 42;
    cout << number << endl;;
 
    // #2
    double a = 3.14;
    double b = 2.71;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a / b << endl;
    cout << a * b << endl;
 
    // #3
    char letter = 'A';
    int letter_pos = letter;
    cout << letter_pos << endl;
 
    // #4
    bool flag = true;
    cout << boolalpha << flag << endl;
    flag = false;
    cout << boolalpha << flag << endl;
 
    // #5
    int value;
    cout << "Input value" << endl;
    cin >> value;
    cout << (value % 2 == 0 ? "true" : "false") << endl;
    return 0;
 
    // #6
    int temp_c;
    cout << "Input value Celcium" << endl;
    cin >> temp_c;
    int temp_f;
    temp_f = (temp_c * 9) / 5 + 32;
    cout << "Farengeit => ";
    cout << temp_f << endl;
 
    // #7
    int a = 10;
    cout << ++a << endl;
    a = a - 3;
    cout << a << endl;
    cout << a % 2 << endl;
 
    // #8
    const float pi = 3.14159;
    int r;
    cout << "Input value r" << endl;
    cin >> r;
    float C = 2 * pi * r;
    cout << "Length is ";
    cout << C << endl;
 
    // #9
    int x, cube;
    cout << "Enter a number" << endl;
    cin >> x;
    cube = CUBE(x);
    cout << "Cube = " << cube << endl;
 
    // #10
    int x, y;
    cout << "Enter number x" << endl;
    cin >> x;
    cout << "Enter number y" << endl;
    cin >> y;
    int add = x + y;
    int sub = x - y;
    int mult = x * y;
    int div = x / y;
    cout << "Addition = " << add << endl << "Substraction = " << sub << endl << "Multiply = " << mult << endl << "Division = " << div << endl;
}