#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    char c;
    Node *next;
    //Node() : next(NULL){}
};
Node *head = NULL;
 vector<int>function1()
{
    vector<int>nums; // by defualt an empty vector;
    return nums;
}
int main()
{
    // int *arr = new int[10];
    // vector<int>num;
    // cout<<num.size();
    // vector<int>num1 = function1();
    // cout<<num1.size();
    // cout<<('('==40);
    // int *ptr = NULL;
    // cout<<(ptr == NULL);
    // cout<<(head == NULL);
    // vector<pair<int, int>>cache;
    // cache[2];
    // pair<int,int>cache2;
    map<int, int>m1; // by defult an empty map.
    cout<<m1.size();
    //m1[2] = 1;
    bool x = m1[2];// allowed to check in map whether this value is present or not and even if key 2 is not there and it will return 0 if 2 is not there or if 2 is there then it will return its value.
    cout<<x;
     // map.insert(make_pair(key, value))
     // map.insert(pair<int, int>(key, value))
     vector<int>num = function1();
    //  cout<<num[2]; segmentation fault
    vector<Node*>children;
}