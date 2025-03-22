#include <iostream>
using namespace std;
int main()
{
    int si, p, r, t;
    cout << "enter the principle amount : " << endl;
    cin >> p;
    cout << "enter the Rate Of intrest (per annum): " << endl;
    cin >> r;
    cout << "enter the Time (in year ) : " << endl;
    cin >> t;
    si = (p * r * t) / 100;
    cout << "Total SI is : " << si << "₹" << endl;
    return 0;
}