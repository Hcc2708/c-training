#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int singleElement(vector<int>num)
{
    int ans = 0;
    for(int i =0; i<num.size(); i++)
    {
        ans ^= num[i]; // will work only if the remaining elements are twice.
        cout<<ans<<" " ;
    }
    return (ans == 0? -1:ans);
}
int main(){
    vector<int>num = {1,3,4,5,5,3,1};
    cout<<endl<<singleElement(num);
}
