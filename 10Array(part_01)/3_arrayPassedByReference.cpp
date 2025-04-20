#include<iostream>
using namespace std;
void func(int arr[]){
    arr[0] = 10000 ;
}
void func2(int *arr){
    arr[0] = 20000 ;
}

void pa(int arr[] , int n ){
   
    for (int i = 0; i < n ; i++)
  {
    cout<< "\n"<<arr[i];
  }

}
int main()
{
// make an array ; 
 int arr[5] = {5, 4, 3, 9,2};
 int n = sizeof(arr)/sizeof(int);
 func(arr); //passsing array name is equvaint to passing the pointer of an array;
 func2(arr);  /// both are same in this case . 
 cout<<arr[0];

 // array is always pass by reference in function 

pa(arr , n);
    return 0;
}