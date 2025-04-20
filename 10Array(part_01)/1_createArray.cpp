#include<iostream>
using namespace std;
int main()
{
  int marks[50];
  cout<<marks[0] <<endl; // print random value
  cout<<marks[1] <<endl;
  cout<<marks[2] <<endl;
  cout<<marks[3] <<endl;
  int newarr[50] = {1 ,2 , 3};
  cout<<newarr[0] <<endl;
  cout<<newarr[1] <<endl;
  cout<<newarr[2] <<endl;
  cout<<newarr[3] <<endl;  // prrint 0 because there is no valuse assigned for 0th index ; 
  cout<<newarr[4]<<endl;

  cout<<"size of newarr " <<sizeof(newarr)<<endl;
  cout<<"length of newarr " <<sizeof(newarr)/sizeof(int)<<endl;

  //output of an array ;

  for (int i = 0; i <= 4 ; i++)
  {
    cout<< newarr[i]<<endl;
  }
  
 int arr[5];
  //input  of an array ;

  int n = sizeof(arr)/sizeof(int);
  for (int i = 0; i < n ; i++)
  {
    cin>> arr[i];
  }

  // print of an array ; 

  for (int i = 0; i < n ; i++)
  {
    cout<< "\n"<<arr[i];
  }

    return 0;
}


