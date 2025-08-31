#include <iostream>
using namespace std;

int main() {
    // Static Allocation
    int a[5] = {1,2,3,4,5};
    cout << "Static Array: ";
    for (int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    // Dynamic Allocation
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) arr[i] = i + 1;

    cout << "Dynamic Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}
