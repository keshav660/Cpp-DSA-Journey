#include <iostream>
using namespace std;
void d2b(int decnum)
{
    int n = decnum;
    int binnum = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        binnum += rem * pow;

        n = n / 2;
        pow = pow * 10;
    }
    cout << binnum << endl;
}
int main()
{
    cout << "enter the decimal number:";
    int n;
    cin >> n;
    d2b(n);
    return 0;
}