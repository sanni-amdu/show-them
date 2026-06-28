#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 != 0) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }

    return 0;
}

