#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    cout << "all multiples of 3 from 10 to 50" << endl;
    for (int i = 10; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}