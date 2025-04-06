// write a funtion to find the factorial of number
#include <iostream>
using namespace std;
bool factorial(int a)
{
    int sum = 1;
    for (int i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    cout << "factorial is : " << sum << endl;
    return sum;
}
int main()
{
    int a;
    cout << "enter the number : " << endl;
    cin >> a;
    factorial(a);
    return 0;
}