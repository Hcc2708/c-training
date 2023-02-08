#include<iostream>
#include<vector>
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int jmp = 0;
        int max = 0;
        for(int i = 0; i<nums.size();)
        {
            int x = i;
            if(i+nums[i] >= nums.size()-1) return ++jmp;
            for(int j = x; j<= x+nums[x]; j++)
            {
                if(j+ nums[j] > max)
                {
                    
                    max = j + nums[j];
                    i = j;
                }
                
            }
            if(i == x)  i++;
            jmp++;
            
        }
        return jmp;
    }
};

int main()
{
    // create a vector of num and pass it to the jump function.
}