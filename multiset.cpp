#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<pair<int, int>, greater<pair<int, int>>>m;
    m.insert({3,1});
    m.insert({1,2});
    m.insert({0,4});

    multiset<pair<int, int>, greater<pair<int, int>>> :: iterator it;
    for( it = m.begin(); it != m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }
}