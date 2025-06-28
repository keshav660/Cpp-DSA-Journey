// reverse array 
/*
1. with extra space ; 
2.  without extra space ; 
*/

//  with extra space ; 
#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout<< " enter the size of array "<<endl; 
    cin>> n ; 
    int arr[n];
    cout<< "enter the element of array "<<endl ;
    for (int  i = 0; i < n ; i++)
    {
        cin>> arr[i] ;
    }
    int copyarr[n];
    for (int i = 0; i <n; i++)
    {
        int j = n - i - 1 ;
        copyarr[i] = arr[j] ;
    }
    for (int i = 0; i <n; i++)
    {
        int j = n - i - 1 ;
        arr[i] = copyarr[i] ;
    }
    cout<< " reversed array is "<<endl ; 
    for (int  i = 0; i < n ; i++)
    {
       cout<< arr[i] << " , "   ; 
    }
    
    return 0;
}