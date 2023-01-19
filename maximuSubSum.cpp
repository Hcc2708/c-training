#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximumSubSum(vector<int>nums)
{
    int sum = 0;
    int maxSum = 0;
    for(int i = 0;i<nums.size()-1; i++)
    {
        sum += nums[i];
        if(sum > maxSum)
        {
            maxSum = sum;
        }
        if(sum <0)
        {
            sum = 0;
        }
    }
    if(sum == 0 && nums.size() != 0)
    {
        int max1 = nums[0];
        for(int i = 0; i<nums.size()-1; i++)
        {
            if(nums[i]>max1)
            {
                max1 = nums[i];
            }
        }
        maxSum = max;
    }
    return maxSum;

}
int main()
{
   vector<int>num = {-1,-2,3, 4,1, 5,-6};
   cout<<maximumSubSum(num);
}

