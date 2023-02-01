#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stk;
    stk.push(100);
    stk.push(80);
    stk.push(60);
    stk.push(75);
    stk.push(60);
    stk.push(75);
    stk.push(85);
    stack<int>stk2;
    int c1 = 1;
    while(!stk.empty())
    {
        
        int x = stk.top();
        stk.pop();
        if(!stk.empty())
        if(stk.top() <= x) 
        {
            c1++;
            stk2.push(stk.top());
            stk.pop();
            
        }
    }
}