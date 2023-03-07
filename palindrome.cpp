#include<iostream>
using namespace std;
int main()
{
    int x = 0;
    string s= "abccba";
    int j= s.length()-1;
    for(int i = 0; i<s.length()/2; i++)
    {
        if(s[i] == s[j])
        {
            j--;
            continue;
        }
        else
        {
            x++;
            j--;
        }


    }
    if(x==0)
    {
    cout<<"string is palindrome";
    }
    else
    cout<< "it is not palindrome";
}
