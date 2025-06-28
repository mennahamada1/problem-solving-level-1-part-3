#include <iostream>
using namespace std;

/*
    Gas Station Distance Calculator
    This program calculates whether a car can reach the gas station
    based on the number of gallons entered by the user.
*/

const int distancePerGallon = 25;
const int requiredDistance = 50;

// Function to calculate distance based on number of gallons
int calculateDistance(int gallons) {
    int distance = gallons * distancePerGallon;

    if (distance >= requiredDistance) {
        cout << "You can reach the gas station." << endl;
    } else {
        cout << "You won't reach the gas station." << endl;
    }

    return distance;
}

int main() {
    int gallons;

    cout << "Enter the number of gallons: ";
    cin >> gallons;

    int distance = calculateDistance(gallons);
    cout << "Total distance the car can travel: " << distance << " meters" << endl;

    return 0;
}