#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number % 2 != 0 && number % 3 == 0) {
        cout << "The number is both odd and divisible by 3" << endl;
    } else {
        cout << "The number is not both odd and divisible by 3" << endl;
    }

    return 0;
}
