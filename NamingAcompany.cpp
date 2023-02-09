#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        long long ans = 0;
        unordered_map<char, set<string>>m;
        for(int i = 0; i<ideas.size(); i++)
        {
            m[ideas[i][0]].insert(ideas[i].substr(1));
        }
        for(char c = 'a'; c<'z'; c++)
        {
            for(char chr = c+1; chr<= 'z'; chr++)
            {
                int common = 0;
                for(auto i : m[c])
                {
                    if(m[chr].find(i) != m[chr].end())
                    common++;
                }

                ans += 2*(m[c].size() - common)*(m[chr].size() - common);
            }
        }
        return ans;
    }
};