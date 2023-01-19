#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>&nums)
{
    int sum1 = 0;
    int sum2 = 0;
    int count1;
    int n = nums.size();
    for(int i = 0; i<n; i++)
    {
        count1 = i;
        int j = i-1;
        while(j>=0)
        {
            sum1+=nums[j];
            j--;
        }
        int l = i+1;
        while(l <n)
        {
            sum2+=nums[l];
            l++;
        }
        }
        if(sum1 == sum2) return count1;
        else return -1;
}
int main()
{
    vector<int>num = {1,7,3,6,5,6};
    cout<<pivotIndex(num);
}
