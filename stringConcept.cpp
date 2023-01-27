#include<iostream>
using namespace std;
int main()
{
    string s = "raj";
    string s1 = "a";
    s1 = s1+s[0]; // if we are taking here s1 + s[0] then s1 is string here if we take it as s[0] then it will be char.
    cout<<s1<<endl;
    s1 = s1[0] + s[0]; // s1[0] and s[0] both are considered as character and their ascii values will be added here.
    
    char c = 'a'+1; // c  = 'a'+'b' won't work here.
    
    cout<<s1<< " "<<c;
    string s3 = "a"+1; // won't print anything you can consider it as garbage value.
    //string s5 = "a"+"bc"; // won't work here one of then should be already declared string variable.
    string s4 = s1+ "ba"; 
    cout<<s4;
}