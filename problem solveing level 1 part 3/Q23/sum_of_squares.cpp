#include <iostream>
using namespace std;

/*
     Sum of Squares Calculator

    This program calculates the sum of the squares of numbers
    stored in a fixed-size array.
    Example: 1² + 2² + 2² = 9
*/

// Function to calculate sum of squares of elements in the array
int sumnumbers() {
    int arr[3] = {1, 2, 2}; // Array with 3 numbers
    int results = 0;        // Variable to store the sum

    for (int i = 0; i < 3; i++) {
        results += arr[i] * arr[i]; // Add square of each element
    }

    return results;
}

int main() {
    int results = sumnumbers(); // Call the function
    cout << "The sum of squares = " << results << endl; // Display result
    return 0;
}
