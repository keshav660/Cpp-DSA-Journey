#include<iostream>
using namespace std;
// OPTIMIZED approach >> kadane algo ;
// 
void maxsubarraysum(int *arr , int n  ){
    int maxsum = INT16_MIN;
    int currsum = 0 ;
    for(int start = 0 ; start < n ; start++)
    { 
          int currsum = currsum+ arr[start];
          maxsum = max(maxsum , currsum);
          if(maxsum<0){
            currsum = 0 ;
          }
        
    }
    cout<<"maximum subaray sum is : "<<maxsum<<endl;
}
int main()
{
    int arr[6] = {2, -3, 6, -5,4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxsubarraysum(arr,n);
    return 0;
}