// Question 5 : For a positive N , WAP that prints the first N Fibonacci numbers.
// (Assume N 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
// This is a series where each number is a sum of previous 2 numbers in the series.
// 3
// 5=2+3,
// 8=3+5 & so on.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number (N >= 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter a number greater than or equal to 2." << endl;
        return 1;  // Exit if N is less than 2
    }

    int first = 0, second = 1;
    cout << "First " << n << " Fibonacci numbers: " << first << ", " << second;

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }
    
    cout << endl;
    return 0;
}
