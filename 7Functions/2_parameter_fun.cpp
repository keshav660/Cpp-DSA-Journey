#include <iostream>
using namespace std;
void sum(int a, int b = 1) //parameter of the funtion 
{
    int add = a + b;
    cout << add;
}
int main()
{
    sum(4); // arguments 
    // we cant give default  parameter value to a ; 
    return 0;
}