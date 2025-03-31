// Qs. Reverse a given number & print the result.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int lastdigit = 0, res = 0;

    while (n > 0)
    {
        lastdigit = n % 10;         // Extract the last digit
        res = res * 10 + lastdigit; // Update the reversed number
        n = n / 10;                 // Remove the last digit
    }

    cout << "Reverse of the number is: " << res << endl;
    return 0;
}
