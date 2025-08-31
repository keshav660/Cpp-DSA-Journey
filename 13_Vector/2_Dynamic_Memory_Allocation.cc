#include <iostream>
using namespace std;

int main() {
    int* p = new int;  // Single integer dynamically allocated
    *p = 42;
    cout << "Value: " << *p << endl;

    delete p; // Free memory
    return 0;
}
