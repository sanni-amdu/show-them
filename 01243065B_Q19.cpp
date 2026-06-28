#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        octal = char((decimal % 8) + '0') + octal;
        decimal /= 8;
    }
    return (octal == "") ? "0" : octal;
}


string decimalToHex(int decimal) {
    string hex = "";
    char hexChars[] = "0123456789ABCDEF";

    while (decimal > 0) {
        hex = hexChars[decimal % 16] + hex;
        decimal /= 16;
    }
    return (hex == "") ? "0" : hex;
}

int main() {
    string binary;
    int choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "\nChoose conversion:\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Binary to Octal\n";
    cout << "3. Binary to Hexadecimal\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    int decimal = binaryToDecimal(binary);

    switch (choice) {
        case 1:
            cout << "Decimal = " << decimal << endl;
            break;

        case 2:
            cout << "Octal = " << decimalToOctal(decimal) << endl;
            break;

        case 3:
            cout << "Hexadecimal = " << decimalToHex(decimal) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
