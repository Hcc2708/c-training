class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int totalW = 0; 
        int maxW = 0;
        for(int i : weights)
        {
            if(maxW < i) maxW = i;
            totalW += i;
        }

        while(maxW < totalW)
        {
            int mid = (maxW+totalW)/2;
            int cW = 0;
            int numD = 1;
            for(int i : weights)
            {
                if(cW + i > mid)
                {
                    numD++;
                    cW = 0;
                }
                cW += i;
            }
            if(numD > days)
            {
                maxW = mid+1;
            }
            else 
            {
                totalW = mid;
            }
        }
        return maxW;
    }
};