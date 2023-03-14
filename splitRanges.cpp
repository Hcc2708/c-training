#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        vector<int>vis(ranges.size(), 0);
        sort(ranges.begin(), ranges.end());
        int cnt = 1;
        int cnt1 = 0;
        vector<int>overlapping;
        
        for(int i = 0; i<ranges.size(); i++ )
        {
            vector<int>v = {ranges[i][0], ranges[i][1]};
            cnt = 1;
            if(!vis[i])
            for(int j = i+1; j<ranges.size(); j++)
            {
                if(!vis[j])
                if(v[1] >= ranges[j][0]&& v[0] <= ranges[j][1])
                {
                    int mini = min(v[0], ranges[j][0]);
                    int maxi = max(v[1], ranges[j][1]);
                    v[0] = mini;
                    v[1] = maxi;
                    vis[j] = 1;
                    cnt++;
                    
                }
            }
            if(cnt >1)
            overlapping.push_back(cnt);
        }
        for(int i : overlapping)
        {
            cnt1 += i;
        }
        int x;
        x= ranges.size()-cnt1 + overlapping.size();
        cout<<x;
        long long ans = 1;
        
        for(int i = 1; i<= x; i++)
        {
            ans *= 2;
            ans %= (int(pow(10, 9)) + 7);
        }
       
        return ans;
    }
};