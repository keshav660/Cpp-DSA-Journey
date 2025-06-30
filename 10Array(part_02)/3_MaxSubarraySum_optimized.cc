#include<iostream>
using namespace std;
// OPTIMIZED approach ;
void maxsubarraysum(int *arr , int n  ){
    int maxsum = INT16_MIN;
    for(int start = 0 ; start < n ; start++){ 
        int currsum = 0 ;
        for (int  end = start; end < n; end++)
        {
          currsum += arr[end]; // optimization here ; tc = O(n^2) ;
          maxsum = max(maxsum , currsum);
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