#include<iostream>
using namespace std;
int main()
{
 int  b=2,c=3;
 int* p,*a=&b,*d=&c;
 p=a; ///here if we use (*p)++ after p = a then it will change the value a also and if we assign some another address to p(like p=d here) again then
 p=d;  /// after doing expression with p the value of a will not affect
 (*p)++;
 cout<<*p<<*a;
}
/// same concept applied  in linked list also
/// like in linked list(isert at beginning and las) we have taken one temporary object 'struct node *p= start' here *p is holding the
/// address of start and inside the loop it will again take the address of link pointer
/// thats why after assigning the address of link to p it will not affect the address of start pointer
