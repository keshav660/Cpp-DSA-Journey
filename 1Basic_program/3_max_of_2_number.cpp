#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the a :" << endl;
    cin >> a;
    cout << "enter the b :" << endl;
    cin >> b;
    if (a > b)
    {
        cout << a << " is greater then " << b << endl;
    }
    else
    {
        cout << b << " is greater then " << a << endl;
    }

    return 0;
}