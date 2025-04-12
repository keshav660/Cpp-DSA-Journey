#include <iostream>
using namespace std;
void bintodecimal(int binnum)
{
    int n = binnum;
    int decnum = 0;
    int pow = 1;
    while (n > 0)
    {
        int lasdig = n % 10;
        decnum += lasdig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << decnum << endl;
}
int main()
{
    cout << "enter the binary number:";
    int n;
    cin >> n;
    bintodecimal(n);
    return 0;
}