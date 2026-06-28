#include <iostream>
using namespace std;

int main() {
    int binaryNumber;
    int decimal = 0, base = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber > 0) {
        remainder = binaryNumber % 10;
        decimal = decimal + remainder * base;
        binaryNumber = binaryNumber / 10;
        base = base * 2;
    }

    cout << "Decimal equivalent = " << decimal << endl;

    return 0;
}
