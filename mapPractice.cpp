#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int>m;
    m.insert(make_pair(3, 5));
    m.insert(make_pair(5, 6));
    cout<<m.find(3)->first;
}