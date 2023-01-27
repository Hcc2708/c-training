#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> nums = {{0,0,1,1,1}, {0,0,0,1,1}, {0,0,0,0,1}};
    int count1 = 0;
    for(int i = 0; i<nums.size(); i++)
    {
        int x = lower_bound(nums[i].begin(), nums[i].end(), 1) - nums[i].begin();
        int y = nums[i].size() - x;
        if(y>= count1)
        {
            count1 = y;
        }
    }
    cout<<count1;
}