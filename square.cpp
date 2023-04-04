#include<iostream>
using namespace std;
int myFunc(int x){
    return x*x;
}
int myFunc(int x, double y){
    return x*x;
}
int myFunc(int x, double y, double z){
    return x*x;
}
char myFunc(int x, float y, char c){
    return c;
}
int main(){
    cout<<myFunc(3)<<endl;
    cout<<myFunc(3, 3.4)<<endl;
    cout<<myFunc(3, 3.4d, 3.4)<<endl;
    cout<<myFunc(3, 3.4f);
}
