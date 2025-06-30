#include<iostream>
using namespace std;
// Brute Foroce approach ;
void maxsubarraysum(int *arr , int n  ){
    int maxsum = INT16_MIN;
    for(int start = 0 ; start < n ; start++){
        for (int  end = start; end < n; end++)
        {
            int currsum = 0 ;
          for (int  i = start; i <= end; i++)
          {
            currsum = currsum + arr[i] ;
          }
          cout<<currsum<<",";
          maxsum = max(maxsum , currsum);
        }
        cout<<endl;
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