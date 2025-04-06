// waf to find the product of 2 numbers - a & b ;

#include <iostream>
using namespace std;
int product(int a, int b)
{
    int p = a * b;
    return p;
}
int main()
{
    cout << product(3, 4);
    return 0;
}