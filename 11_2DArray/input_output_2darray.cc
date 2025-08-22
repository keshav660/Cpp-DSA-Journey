#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    // Input elements
    cout << "Enter elements of 2D array (3x3):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output elements
    cout << "Elements of 2D array are:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
}