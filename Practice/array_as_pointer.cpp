/* Write a program to display content of pointer using an array of pointers*/

#include<iostream>
using namespace std;

int main()
{
  int arr[5] = { 1, 2, 3, 4, 5 };
  int *ptr = arr;
  cout<<"Address is "<<ptr;
 return 0;
}
