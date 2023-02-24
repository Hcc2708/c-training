class Solution {
public:
    bool static cmp(int a, int b)
    {
        return a>b;
    }
    int minimumDeviation(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
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
            }
            else break;
        }
        int max1 =0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(max1 < nums[i]) max1 = nums[i];
        }
        for(int i = nums.size()-1; i>= 0;i--)
        {
            if(nums[i] % 2 != 0 && nums[i] < max1)
            {
                int prev = -1;
                int num = nums[i];
                while(num < max1 && num%2 != 0)
                {
                    prev = num;
                    num = num*2;
                }
                cout<<prev<<" "<<num<<endl;
                if(max1 - prev > abs(num - max1)) nums[i] = num;
                else nums[i] = prev;
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