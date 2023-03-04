#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        int cnt = 1;
        int cnt1 = 0;
        vector<int>overlapping;
    
        vector<int>v = {ranges[0][0], ranges[0][1]};
        for(int j = 1; j<ranges.size(); j++)
            {
                if(v[1] >= ranges[j][0]&& v[0] <= ranges[j][1])
                {
                    int mini = min(v[0], ranges[j][0]);
                    int maxi = max(v[1], ranges[j][1]);
                    v[0] = mini;
                    v[1] = maxi;
                    cnt++;
                    
                }
                else
                {
                    if(cnt >1)
                    overlapping.push_back(cnt);
                    cnt = 1;
                    v[0] = ranges[j][0];
                    v[1] = ranges[j][1];
                }
            }
        if(cnt >1)
            overlapping.push_back(cnt);
            
        for(int i : overlapping)
        {
            cnt1 += i;
        }
        int x;
        x= ranges.size()-cnt1 + overlapping.size();
        long long ans = 1;
        
        for(int i = 1; i<= x; i++)
        {
            ans *= 2;
            ans %= (int(pow(10, 9)) + 7);
        }
       
        return ans;
    }
};