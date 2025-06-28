#include <iostream>
using namespace std;

// This program uses switch to suggest drinks based on age
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    switch (year) {
        case 14:
            cout << "You can drink milk.";
            break;

        case 18:
            cout << "You can drink cola.";
            break;

        case 21:
            cout << "You can drink tea.";
            break;

        default:
            cout << "You can drink whisky.";
            break;
    }

    return 0;
}
