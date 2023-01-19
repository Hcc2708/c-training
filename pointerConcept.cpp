#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    int a = 10;
    cout<<ptr;
    cout<<endl;
    cout<<&ptr;
    ptr = &a;

    cout<<endl<<ptr;
    cout<<endl<<&ptr;

    int b = 10;
    *ptr = b;
    cout<<endl<< &ptr<<"  "<<ptr<<" "<<&a<<" "<<*ptr<<" "<<a;

    // double pointer,
    int **q  = &ptr;//**q can only store the address of  single pointer 
    int ***r = &q;// ***r can only store the address of double pointer 
    cout<<" for q: " << "value of a : " << **q<< " address of a : " << *q<< " address of ptr : " << q<< " address of q : " << &q;
    cout<<endl<<"for r : "<<"value of a : "<< ***r<< " address of a : "<< **r<<" address of ptr : "<< *r<<" address of q : "<< r<< " address of r : "<< &r; 

    **q = 45;
    cout<<endl<<"value of a : "<<a<<" value of *ptr : "<<*ptr<<" value of **q : "<< **q<< " value of ***r: "<< ***r;

}
