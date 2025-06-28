#include <iostream>
using namespace std;

/*
     Print Odd Numbers from Array

    This program prints all the odd numbers from a fixed-size array.
*/

int nums() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Loop through the array and print only odd numbers
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl; // New line after printing numbers
    return 0; // Return 0 just to match function signature
}

int main() {
    nums(); // Call the function to print odd numbers
    return 0;
}
