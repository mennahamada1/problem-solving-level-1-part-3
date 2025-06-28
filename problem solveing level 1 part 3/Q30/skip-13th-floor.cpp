#include <iostream>
using namespace std;

/*
 🏢 Floor Number Converter (Skip Floor 13)
 This program adjusts the real-world floor number to the building's internal floor system.
 Many buildings skip floor number 13 for superstitious reasons.
 The program handles:
 - Basement or ground floor (floor ≤ 0)
 - Floors between 1 and 13 → minus 1
 - Floors above 13 → minus 2
*/

int convertFloor(int floor) {
    if (floor <= 0) {
        // Basement floors stay the same
        cout << floor;
    } else if (floor <= 13) {
        // Floors 1 to 13 become floor - 1
        cout << floor - 1;
    } else {
        // Floors after 13 become floor - 2
        cout << floor - 2;
    }
    return 0;
}

int main() {
    int floor;
    cout << "Enter the real-world floor number: ";
    cin >> floor;

    cout << "Building floor is: ";
    convertFloor(floor);

    return 0;
}
