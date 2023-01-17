#include<iostream>
using namespace std;
int main(){
    char c = '1';
    string s;
    int x  = int(c);
    int y = c - '0';
    c = '0'+ 1;  /// what happens here 48 + 1  = 49 which is the ascii value of 1;
    s = 49;
    cout<<x<<" "<< y<<" "<<c<< " " <<s<<endl;
    s = x;
    cout<<x<<" "<< y<<" "<<c<< " " <<s<<endl;
    int z = 50;
    c = 50;
    cout<<x<<" "<< y<<" "<<c<< " " <<s<<endl;
    s = s+c;
    cout<<s<<endl;
    s = "raj" + s;
    cout<<s<<endl;
    s = "raj" + 2;
    cout<<s;
    cout<<endl<<('1'- '0');
}
