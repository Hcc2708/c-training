#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int, list<int>>graph;
        queue<int>q;
        for(int i = 0; i<isConnected.size(); i++)
        {
            for(int j = 0; j<isConnected[i].size(); j++)
            {
                if(i != j)
                if(isConnected[i][j] == 1)
                graph[i].push_back(j);
            }
        }
        vector<int>visited(isConnected.size(), 0);
        int cnt = 0;
        for(int i =0; i< isConnected.size(); i++)
        {
            if(!visited[i])
            {
                cnt++;
                q.push(i);
                while(!q.empty())
                {
                    visited[q.front()] = 1;
                    for(auto j : graph[q.front()])
                    {
                        if(!visited[j])
                        q.push(j);
                    }
                    q.pop();
                }
            }
        }
        return cnt;

    }
};