#include<iostream>
using namespace std;
int linearsearch(int *arr , int n , int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            return i ;
        }
    }
    return -1 ; 
    
}
int main()
{
int arr[] = {2 , 4, 5, 6 , 7, 8 ,10 , 13 , 23, 354};
int n = sizeof(arr)/ sizeof(int); 

cout<< linearsearch(arr , n , 1) ;

    return 0;
}