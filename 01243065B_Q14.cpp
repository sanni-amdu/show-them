 1. Left Shift Operator (<)
 Purpose:

Shifts all bits of a number to the left by a specified number of positions.
Each left shift generally multiplies the number by 2.

 Example:
         #include <iostream>
using namespace std;

int main() {
    int x = 5; 
    int result = x << 1; 

    cout << "Result: " << result << endl;
    return 0;
}

     Explanation:

Binary of 5 = 00000101
After shifting left by 1 ? 00001010
Result = 10


2. Right Shift Operator (>>)
 Purpose:

Shifts all bits of a number to the right by a specified number of positions.
Each right shift generally divides the number by 2.

 Example:
         #include <iostream>
using namespace std;

int main() {
    int x = 8; 
    int result = x >> 1; 

    cout << "Result: " << result << endl;
    return 0;
}

  Explanation:

Binary of 8 = 00001000
After shifting right by 1 ? 00000100
Result = 4
         
         
         
         
         
         
