#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class myStack{
    
    queue<int>q1;
    public:
    myStack(){

    }
    void push(int val)
    {
        q1.push(val);
    }
    int top()
    {
        int s = q1.size();
        int i =0;
        int x;
        while(i<s-1)
       {
          x = q1.front();
          q1.pop();
          q1.push(x);
          i++;
       }
       int val = q1.front();
       q1.pop();
       q1.push(val);
       return val;
    }
    int pop()
    {
         int s = q1.size();
        int i =0;
        int x;
        while(i<s-1)
       {
          x = q1.front();
          q1.pop();
          q1.push(x);
          i++;
       }
       int val = q1.front();
       q1.pop();
       return val;
    }
};
int main()
{
    myStack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(5);

    
    cout<<stk.top();
    cout<<stk.pop();
    cout<<stk.top();
}