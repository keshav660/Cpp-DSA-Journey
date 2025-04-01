// 1
// 12
// 123
// 1234
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4, k = 65;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(k);
//             k++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 4 ;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}