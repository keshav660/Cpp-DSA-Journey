// Qs. WAP where user can keep entering numbers till they enter a multiple of 10.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "now you can enter the numbers" << endl;
    while (true)
    {
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
    }

    return 0;
}