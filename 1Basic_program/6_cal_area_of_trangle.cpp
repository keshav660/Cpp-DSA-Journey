#include <iostream>
using namespace std;
int main()
{
    // area(trangle) = 1/2 (adhar *height)
    int a, h, area;
    cout << "enter the adhar : " << endl;
    cin >> a;
    cout << "enter the height : " << endl;
    cin >> h;
    area = (a * h) / 2;
    cout << "area of trangle is :" << area;
    return 0;
}