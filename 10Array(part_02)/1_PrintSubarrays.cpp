#include<iostream>
using namespace std;
void printsubarray(int *arr , int n  ){
    for(int start = 0 ; start < n ; start++){
        for (int  end = 0; end < n; end++)
        {
        //    cout<< "("<<start<<","<<end<<")";
        for (int i = start; i < end; i++)
        {
           cout<<arr[i];
        }
        cout<<"," ; 
        
        }
        cout<<endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printsubarray(arr,n);
    return 0;
}