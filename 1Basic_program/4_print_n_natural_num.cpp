#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n >= i)
        {
            cout << i << "\n"
                 << endl;
        }
    }
    return 0;
}