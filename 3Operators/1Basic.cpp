#include <iostream>
using namespace std;

int main() {
    // 1. Constants
    const double PI = 3.14159;
    cout << "Constant PI: " << PI << endl;

    // 2. Implicit Type Conversion
    int intVar = 10;
    double doubleVar = intVar; // Implicit conversion from int to double
    cout << "Implicit Conversion: " << doubleVar << endl;

    // 3. Explicit Typecasting
    double num = 5.75;
    int castedNum = (int)num;  // Explicit conversion
    cout << "Explicit Typecasting: " << castedNum << endl;

    // 4. Arithmetic Operators
    int a = 15, b = 4;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    // 5. Unary Arithmetic Operators
    int x = 5;
    cout << "Post-Increment: " << x++ << endl; // prints 5, then x becomes 6
    cout << "Pre-Increment: " << ++x << endl; // x is now 7
    cout << "Post-Decrement: " << x-- << endl; // prints 7, then x becomes 6
    cout << "Pre-Decrement: " << --x << endl; // x is now 5

    // 6. Assignment Operators
    int y = 10;
    y += 5;  // Same as y = y + 5;
    cout << "Assignment Operator (+=): " << y << endl;

    y *= 2;  // Same as y = y * 2;
    cout << "Assignment Operator (*=): " << y << endl;

    // 7. Relational Operators
    int p = 8, q = 12;
    cout << "p == q: " << (p == q) << endl;
    cout << "p != q: " << (p != q) << endl;
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;

    // 8. Logical Operators
    bool condition1 = true, condition2 = false;
    cout << "Logical AND: " << (condition1 && condition2) << endl;
    cout << "Logical OR: " << (condition1 || condition2) << endl;
    cout << "Logical NOT: " << (!condition1) << endl;

    return 0;
}
