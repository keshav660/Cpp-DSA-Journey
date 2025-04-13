#include <iostream>
using namespace std;

void passByValue(int x) {
    x = x + 10;
    cout << "Inside passByValue: " << x << endl;
}

void passByReference(int* x) {
    *x = *x + 10;
    cout << "Inside passByReference (with pointer): " << *x << endl;
}

void passByReferenceUsingRefVar(int& x) {
    x = x + 10;
    cout << "Inside passByReferenceUsingRefVar (with reference): " << x << endl;
}

int main() {
    int a = 5;

    // 1. Memory Address
    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;

    // 2. Pointer Declaration and Initialization
    int* ptr = &a; // 'ptr' holds address of 'a'
    cout << "Pointer ptr holds address: " << ptr << endl;

    // 3. Dereferencing
    cout << "Value at address stored in ptr (*ptr): " << *ptr << endl;

    // 4. Modifying value using pointer
    *ptr = 20;
    cout << "Value of a after modifying through pointer: " << a << endl;

    // 5. Passing by Value
    passByValue(a);
    cout << "After passByValue, a: " << a << endl;

    // 6. Passing by Reference using Pointer
    passByReference(&a);
    cout << "After passByReference, a: " << a << endl;

    // 7. Reference Variables
    int& ref = a;  // 'ref' is another name for 'a'
    ref = 100;
    cout << "After modifying ref (reference variable), a: " << a << endl;

    // 8. Passing by Reference using Reference Variable
    passByReferenceUsingRefVar(a);
    cout << "After passByReferenceUsingRefVar, a: " << a << endl;

    return 0;
}
