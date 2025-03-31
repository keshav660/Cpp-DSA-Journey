// Question 3 : WAP to input g,number and cPfCk whethertp€ number is an Armstrong
// number or not.
// An Armstrong number is a number that is equal to the sum of cubes of its digits-
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number: ";
    int n, num, k, sum = 0;
    cin >> n;

    int real = n; // Store original number for comparison

    while (n > 0)
    {
        num = n % 10;        // Extract last digit
        k = num * num * num; // Cube of the digit
        sum += k;            // Add to sum
        n = n / 10;          // Remove last digit
    }

    if (sum == real)
    {
        cout << "Number is an Armstrong number." << endl;
    }
    else
    {
        cout << "Number is not an Armstrong number." << endl;
    }

    return 0;
}
