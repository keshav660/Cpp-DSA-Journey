//Find Transpose of a Matrix
#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int transpose[3][2];  // will be m x n

    // Compute transpose
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // Print transpose
    cout << "Transpose of matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Original (2x3):

1 2 3
4 5 6


Transpose (3x2):

1 4
2 5
3 6

 */