#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotSearch(vector<int>nums)
    {
        int lb = 0;
        int n = nums.size()-1;
        int ub = n;
        while(lb <= ub)
        {
             if(lb == 0 && ub == 1)
        {
            if(nums[ub] < nums[lb]) return ub;
            if(nums[ub] > nums[ub+1]) return ub+1;
            return 0;
        }
            int mid = (lb + ub)/2;
            if(mid != 0)
            if(nums[mid] < nums[mid-1])
            {
                return mid;
            }
            else if(nums[mid] > nums[n])
            {
                lb = mid+1;
            }
            else ub = mid-1;
        }
        return 0;
    }
    int targetSearch(vector<int>nums, int target, int pivot)
    {
        int lb = 1;
        int ub = 0;
        if(target >= nums[0] && pivot != 0)
        {
            lb = 0;
            ub = pivot  - 1;
        }
        else if(target <= nums[nums.size()-1] || pivot == 0)
        {
            lb = pivot;
            ub = nums.size()-1;
        }
        while(lb <= ub)
        {
            int mid = (lb + ub)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                ub = mid-1;
            }
            else lb = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1)
        {
            if(nums[0] == target)
        return 0;
        else return -1;}
        else if (nums.size() ==2 )
        {
            if(nums[0] == target)
            return 0;
            if(nums[1] == target)
            return 1;
            else return -1;
        }
        int pivot = pivotSearch(nums);

        return targetSearch(nums, target, pivot);
    }
};
int main(){
    Solution obj;
    vector<int>nums = {4, 5, 6, 7, 0, 1, 2};
    cout<<obj.search(nums, 0);
}