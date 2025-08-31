#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}
