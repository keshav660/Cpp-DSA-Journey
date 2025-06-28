#include<iostream>
using namespace std;
int Binarysearch(int *arr , int n , int key){
   int st= 0 , en = n-1 ;
   while (st<= en)
   {
     int mid = (st+en)/2 ;
     if(arr[mid]==key) return mid ;
     else if(arr[mid]<key) st = mid+1 ;
     else en = mid-1 ;
   }
   
    
}
int main()
{
int arr[] = {2 , 4, 5, 6 , 7, 8 ,10 };
int n = sizeof(arr)/ sizeof(int); 

cout<< Binarysearch(arr , n , 6) ;

    return 0;
}