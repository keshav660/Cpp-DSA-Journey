//reverse array 
// 2.  without extra space ;  {two pointer approach}

#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the size of array: ";
    cin >> n; 

    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Two pointer approach
    int start = 0, end = n - 1;
    while (start < end)
    {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
