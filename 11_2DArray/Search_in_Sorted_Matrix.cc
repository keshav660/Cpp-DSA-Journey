#include <iostream>
using namespace std;

bool staircaseSearch(int mat[][4], int n, int m, int key) {
    int i = 0;       // start row
    int j = m - 1;   // start col (top-right corner)

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout << "Found at position (" << i << ", " << j << ")\n";
            return true;
        } 
        else if (mat[i][j] > key) {
            j--; // move left
        } 
        else {
            i++; // move down
        }
    }

    cout << "Not Found\n";
    return false;
}

int main() {
    int n = 4, m = 4;
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    staircaseSearch(mat, n, m, key);

    return 0;
}
