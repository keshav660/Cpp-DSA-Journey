// Print the sum of digits of a number using while loop.
// n = 10829
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    
    int sum = 0, k = 0;

    while (n > 0)
    {
        k = n % 10;   // Extract the last digit
        sum += k;     // Add it to sum
        n = n / 10;   // Remove the last digit (update n)
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
