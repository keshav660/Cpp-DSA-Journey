#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array of integers
    int *ptr = arr;  // Pointer points to the first element of array

    cout << "Array elements using pointer arithmetic:\n";

    for (int i = 0; i < 5; i++) {
        // *(ptr + i) accesses the ith element from the pointer's current position
        cout << "Element " << i << " = " << *(ptr + i) << endl;
    }

    cout << "\nPointer increment example:\n";
    cout << "Initial pointer points to value: " << *ptr << endl;

    ptr++;  // Move pointer to the next integer (adds sizeof(int) to address)
    cout << "After ptr++, pointer points to value: " << *ptr << endl;

    ptr += 2;  // Move pointer 2 positions forward
    cout << "After ptr += 2, pointer points to value: " << *ptr << endl;

    ptr--;  // Move pointer one position back
    cout << "After ptr--, pointer points to value: " << *ptr << endl;

    return 0;
}
