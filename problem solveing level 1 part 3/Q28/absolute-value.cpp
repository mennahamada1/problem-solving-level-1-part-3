#include <iostream>
using namespace std;

/*
🔢 Absolute Value Printer
This program prints the absolute value of a number entered by the user.
*/

int numbers(int num) {
    if (num >= 0) {
        cout << "The number = " << num << endl;
    } else {
        cout << "The number = " << num * -1 << endl;
    }
    return 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    numbers(num);
    return 0;
}
