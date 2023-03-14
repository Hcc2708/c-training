class Solution {
public:
    bool static cmp(int a, int b)
    {
        return a>b;
    }
    int minimumDeviation(vector<int>& nums) {
        int max = 0;
        for(int i : nums)
        {
            if(i%2 == 1)
            if(max < i) max = i;
        }
        for(int i  = 0; i<nums.size(); i++)
        {
            if(nums[i] >= max)
            {
                while(nums[i] >= max && nums[i] %2 == 0)
                {
                    nums[i] = nums[i]/2;
                }
                if(nums[i] > max) max = nums[i];
            }
        }
        sort(nums.begin(), nums.end(), cmp);
        for(int i : nums) cout<<i<<" ";
        int max1 = nums[0];
        int currMin = nums.size()-1;
        for(int i = nums.size()-1; i>= 0;i--)
        {
            if(nums[i] % 2 != 0 && nums[i] < max1)
            {
                int prev = nums[i];
                int num = nums[i];
                while(num < max1 && num%2 != 0)
                {
                    prev = num;
                    num = num*2;
                }
                if(num <= max1)
                {
                    nums[i] = num;
                    if(i == nums.size()-1)
                    {
                        if(nums[i-1] < num)
                        currMin = i-1;

                        else currMin = i;
                    }
                    else
                    {
                        if(i-1 >= 0)
                        {
                            if(nums[i-1] < num)
                            {
                                if(nums[currMin] > nums[i]) currMin = i-1;
                            }
                        }
                    }
                }
                else 
                {
                    if(abs(num - max1) < abs(num - nums[currMin]))
                    {
                        
                        if(currMin == i)
                        {
                            if(abs(num-max1) < abs(max1 - nums[i]))
                            {
                                nums[i] = num;
                            }
                        }
                        else {
                            nums[i] = prev;
                        }
                        if(i-1 >= 0)
                        {
                            if(nums[currMin] > nums[i-1]) currMin = i-1;
                        }
                    }
                    else 
                    {
                        nums[i] = prev;
                        if(i-1 >= 0)
                        {
                            if(nums[currMin] > nums[i-1]) currMin = i-1;
                        }
                    }
                }
            }
        }
        int min  = INT_MAX;
        int max2 = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max2) max2 = nums[i];
        }
        return max2 - min;
    }
};