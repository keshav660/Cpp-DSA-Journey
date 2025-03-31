// Qs. Check if a number is prime or not.
// prime number > must have only 2 positive factor
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the number :>>"<<endl;
    cin>>n;
    bool isprime = true ;
    for (int i =2; i <= (n-1)/2; i++)
    {
        if (n%i==0)
        {
            isprime = false ; 
            break;

        }
    }
    if (isprime ==true)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number is not prime"<<endl;
    }
    return 0;
}