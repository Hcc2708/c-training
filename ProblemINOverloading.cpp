// problem in overloading
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mul(int a){
    return a;
}
float mul(float b){
    return b;
}

int mul2(int a){
    return a;
}
float mul2(float b, int k = 10){
    return b;
}
int main(){
    int a = mul(2);
    cout<<"int type output is :"<<a <<endl;
    //float b = mul(2.1); // this function will raise error because int can also accept the floating value however it will only store the integer part.
    float b = mul(2.1f);
    cout<<"float type output is " <<b<<endl;

    //mul2(2); // again this will cause an error that function can not be invoked.
    mul2(2, 5); // only this can be invoked
}
