#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int>m;// implemented using has function as hasmap
    m[0] = 5;
    m[1] = 6;
    m[3] = 12;
    m[8] = 9;
    // m[3] = 10;
    m[4] = 7;
    for(auto i: m)
    {
        cout<<i.first<<" : "<< i.second;
        cout<<endl;
    }
}