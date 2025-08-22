//Sum of numbers in the second row of a 2D array
#include <iostream>
using namespace std;

int main() {
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}
    };

    int sum = 0;
    int row = 1;  // second row (index starts at 0)

    for (int j = 0; j < 3; j++) {
        sum += nums[row][j];
    }

    cout << "Sum of 2nd row: " << sum << endl;

    return 0;
}
