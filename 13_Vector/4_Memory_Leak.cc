#include <iostream>
using namespace std;

int main() {
    int* p = new int(10);  // Allocated memory
    cout << *p << endl;

    // delete p;   // ❌ Agar hum delete bhool jaate hain
    // Toh memory leak hota hai

    return 0;
}
