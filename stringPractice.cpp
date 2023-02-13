#include<iostream>
using namespace std;
int main()
{
    string s = "raja";
    string s2 = "saja";
    int s3  = max(s.size(), s2.size());
    int s4 = min(s.size(), s2.size());
    cout<< s3;
    cout<<endl<<s4;
}