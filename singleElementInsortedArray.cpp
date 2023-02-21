#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void recursive(vector<int>&nums, int &val, bool &flag, int lb, int ub)
    {
        if(lb > ub) return ;
        int mid = (lb+ub)/2;
        if(mid-1 >= 0 && mid+1 <= nums.size()-1)
        {
            if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid])
            {
                flag = 1;
                val = nums[mid];
            }
        }
        else if(mid-1 < 0 && mid+1 <= nums.size()-1)
        {
            if(nums[mid] != nums[mid+1])
            {
                flag = 1;
                val = nums[mid];
            }
        }
        else if(mid+1 >= nums.size() && mid-1 >= 0)
        {
            if(nums[mid] != nums[mid-1])
            {
                flag = 1;
                val = nums[mid];
            }
        }
        else if(mid-1 <0 && mid+1 >= nums.size())
        {
            flag = 1;
            val = nums[mid];
        }
        if(!flag)
        {
            recursive(nums, val, flag, lb, mid-1);
            recursive(nums, val, flag, mid+1, ub);
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        bool flag = 0;
        int val = -1;
        
        recursive(nums, val, flag, 0, nums.size()-1);
        return val;
    }
};