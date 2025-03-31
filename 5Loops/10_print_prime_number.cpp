// Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.
// (Assume N 2)

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;  // Prime numbers start from 2
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // If divisible, it's not prime
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive number (N >= 2): ";
    cin >> n;

    if (n < 2) {
        cout << "Please enter a number greater than or equal to 2." << endl;
        return 1;  // Exit the program
    }

    cout << "Prime numbers from 2 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
