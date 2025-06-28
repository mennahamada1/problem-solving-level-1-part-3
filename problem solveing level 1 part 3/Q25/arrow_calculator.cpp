#include <iostream>
#include <cmath> // عشان نستخدم دالة ceil

using namespace std;

/*
 🎯 Arrow Calculator
 This program calculates the number of arrows needed
 to kill a certain number of dragons.
 Assumes each arrow kills 2 dragons.
*/

// دالة لحساب عدد الأسهم المطلوبة
int countArrows(int killedDragons) {
    // نستخدم ceil عشان لو عدد التنانين فردي نحتاج سهم إضافي
    return ceil(killedDragons / 2.0);
}

int main() {
    int killed;
    cout << "Enter the number of dragons killed: ";
    cin >> killed;

    int arrows = countArrows(killed);
    cout << "Number of arrows needed: " << arrows << endl;

    return 0;
}
