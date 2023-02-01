#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char>stk;
    string s = "{{}}}}}}{{{{{}";
    for(int i =0; i<s.size(); i++)
    {
        if(stk.empty())
            {
                stk.push(s[i]);
            }
        else if(s[i] == '{') stk.push(s[i]);
        else if(s[i] == '}')
        {
            if(stk.top() == '{') stk.pop();
            else stk.push(s[i]);
        }
    }
    if(stk.empty()) cout<<"string is balanced ";
    else
    {
        int c1 = 0;
        char c = '\0';
        while(!stk.empty())
        {
            c = stk.top();
            stk.pop();
            if(!stk.empty()&& c== stk.top())
            {
                c1++;
                stk.pop();
            }
            else if(!stk.empty()) 
            {
                c1+=2;
                stk.pop();
            }

        }
        cout<<"number of minimum flip required : "<< c1;
    }
}