#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    cout << "\nResults:\n";
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;

    if (num2 != 0) {
        double quotient = (double)num1 / num2;
        cout << "Quotient = " << quotient << endl;
    } else {
        cout << "Quotient = Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}
