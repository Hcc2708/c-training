#include<iostream>
using namespace std;
int main()
{
  int a= 9;/// 9 will be stored in the address of a , address decided first before the value will store there
  int b= 9;
  int *p= &a; /// p is pointing to address of a means p and a is holding same address
  int c= *p;/// here we are storing the the value 9 at the address of c
  delete p;
  cout<<c;

}
