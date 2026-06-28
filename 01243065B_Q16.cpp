. Bitwise NOT Operator (~)
 Purpose:

Inverts each individual bit of a number (works at the binary level).

 Example:
          #include <iostream>
using namespace std;

int main() {
    int x = 5; 
    int result = ~x;

    cout << "Result: " << result << endl;
    return 0;
}
    Explanation:

Binary of 5 = 00000101
Applying ~ flips all bits ? 11111010
Result is -6 (in two's complement form)

   So, ~x changes every 0 to 1 and every 1 to 0.
   
   
   
   2. Logical NOT Operator (!)
  Purpose:

Reverses a boolean value (true ? false).

  Example:
          #include <iostream>
using namespace std;

int main() {
    int x = 5;

    if (!x) {
        cout << "x is false" << endl;
    } else {
        cout << "x is true" << endl;
    }

    return 0;
}

 Explanation:

In C++, any non-zero value is true.
x = 5 ? true
!x ? false
So the output is:
       x is true
