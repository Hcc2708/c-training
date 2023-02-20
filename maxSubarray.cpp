class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxSum = 0;
        int currSum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            currSum+= nums[i];
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
            if(currSum <0)
            {
                currSum=0;
            }
        }
        if(maxSum ==0 && nums.size() != 0)
        {
            int max = nums[0];
            for(int i = 0; i<nums.size(); i++)
            {
                if(max<=nums[i])
                {
                    max = nums[i];
                    maxSum = max;
                }
            }
        }
        return  maxSum;
    }
};
