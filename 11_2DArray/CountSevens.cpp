// Count the number of 7s in a 2D array
#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 7) {
                count++;
            }
        }
    }

    cout << "Number of 7s in the array: " << count << endl;

    return 0;
}
