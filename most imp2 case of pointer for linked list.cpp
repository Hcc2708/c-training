#include<iostream>
using namespace std;
int main()
{
 int  b=2,c=3;
 int* p,*a,*d=&c;
 p=&b;
 a=&b;
 cout<<p;
 delete p;
 cout<<endl<<a;
 cout<<endl<<*a;
}
/// same concept applied  in linked list also in delete concept that if two pointer holding same address and if we are deleting only one pointer
///  then second one will still point that address thats why in delete case we use one separate deletion for those linked list which only one element
/// because if we will not use one separate condition for it then in general looping condition start pointer will hold its own address once again in
/// case of circular linked list in case of singly linked list general case may work for it also but better to use one separate condition for it

