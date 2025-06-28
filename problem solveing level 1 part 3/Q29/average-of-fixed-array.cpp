#include <iostream>
using namespace std;

/*
📊 Average Calculator using Array
This program calculates the average of 6 fixed integers using an array.
*/

int numbers() {
    int values[6] = {1, 2, 3, 4, 5, 6};
    double results = 0;

    for (int i = 0; i < 6; i++) {
        results += values[i];
    }

    return results;
}

int main() {
    double results = numbers();
    cout << "Average: " << results / 6 << endl;
    return 0;
}
