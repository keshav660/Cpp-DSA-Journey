// write a funtion to check the number is even or odd ; 
#include <iostream>
using namespace std;
bool eo(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a;
    cout << "enter the number : " << endl;
    cin >> a;
    eo(a);
    if (eo(a) == true)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}