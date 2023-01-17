#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findDifference(vector<int>nums){
    int n = nums.size();
    int elementSum = 0;
    int digitSum = 0;
    for(int i = 0; i< n; i++)
    {
        elementSum += nums[i];

        if(nums[i] <=9)
        {
            digitSum += nums[i];

        }
        else{
            int x = nums[i];
            while(x>0)
            {
                digitSum+= x%10;
                x = x/10;
            }
        }
    }
    return abs(elementSum - digitSum);
}
int main()
{
    vector<int>nums = {33, 4};
    cout<<findDifference(nums);
}
