#include<bits/stdc++.h>
#include<iostream>
#include<vector>


// the program is applicable for sorted array;
using namespace std;
vector<int> findDegree(vector<int>num)
{
    if(num.size() == 0)
    return {-1};
    cout<<num.size();
    cout<<endl;
    int count1 = 1;
    int deg = 1;
    for(int i =1; i<num.size();i++)
    {

        if(num[i-1] == num[i])
        {

            count1++;
            if(count1>deg)
            deg = count1;

        }
        else
        count1 = 1;
    }
    cout<<"degree is : " << deg;
    return {0};
}
int main()
{
    int n,m;
    vector<int>num;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>m;
        num.push_back(m);
    }
    sort(num.begin(), num.end());
    findDegree(num);
}
