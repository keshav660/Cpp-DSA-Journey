#include <iostream>
using namespace std;

int diagonalSum(int mat[][4], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) { // rows
        for (int j = 0; j < n; j++) { // cols
            if (i == j) {  
                // Primary diagonal
                sum += mat[i][j];
            } 
            else if (j == n - i - 1) {  
                // Secondary diagonal
                sum += mat[i][j];
            }
        }
    }

    return sum;
}

int main() {
    int n = 4;
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Sum of diagonals: " << diagonalSum(mat, n) << endl;

    return 0;
}