class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0;
        long long subCnt = 0;
        long long ans = 0;

        for(int i = 0; i< nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                cnt++;
                subCnt += cnt;
            }
            else
            {
                ans += subCnt;
                cnt = 0;
                subCnt = 0;
            }
        }
        if(cnt != 0 && subCnt != 0)
        {
            ans += subCnt;
            cnt = 0;
            subCnt = 0;
        }
        return ans;
    }
};