#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>num = {1,2,3,4,8,7,9};
    vector<int>ans1;
    sort(num.begin(), num.end());
    for(int i=0; i<num.size()-1; i++)
    {
        if(num[i+1]-1 != num[i])
        {
            ans1.push_back(num[i]+1);

        }
    }
    for(auto i = ans1.begin(); i<ans1.end(); i++)
    cout<<*i<<" ";
}
