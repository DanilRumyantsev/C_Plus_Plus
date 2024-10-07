#include <iostream>
using namespace std;

int sumArray(int *arr, int size) {
    if (size == 0) {
        return 0;
    }
    else {
        int a = arr[size - 1] + sumArray(arr, size - 1);
        return a;
    }
}

void copyString(const char* source, char* destination) {
    if (*source == '\0') {
        *destination = '\0';
        return;
    }
    *destination = *source;
    copyString(source + 1, destination + 1);
}

bool isPalindrome(const char* str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (str[start] != str[end]) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    // #1
    // int size;
    // cout << "Input numbers in array" << endl;
    // cin >> size;
    // int *arr = new int[size];
    // cout << "Input elements array" << endl;

    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }

    // int sum = sumArray(arr, size);

    // cout << "Sum elements = " << sum;

    // delete []arr;

    // #2
    // const int MAX_LENGTH = 100;
    // char source[MAX_LENGTH];
    // char destination[MAX_LENGTH];

    // cout << "Input words(max 99 symbols) = ";
    // cin >> source;

    // copyString(source, destination);

    // cout << "Copy stroke = " << destination << endl;

    // return 0;

    // #3
    const int MAX_LENGTH = 100;
    char str[MAX_LENGTH];

    cout << "Input text(Max 99 symbols) ";
    cin >> str;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    bool result = isPalindrome(str, 0, length - 1);

    if (result) {
        cout << "Stroka \"" << str << "\" is palindrom." << endl;
    } else {
        cout << "Stroka \"" << str << "\" is not paindrom." << endl;
    }
}