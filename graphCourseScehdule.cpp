#include<iostream>
#include<vector>
#include<stack>
class Solution {
public:
    void dfs(vector<vector<int>>&g, vector<int>&vis, stack<int>&stk, vector<int>&dfsvis, int i, bool &flag)
    {
        vis[i] = 1;
        dfsvis[i] = 1;
        for(int j = 0; j< g[i].size(); j++)
        {
            if(!vis[g[i][j]])
            {
                dfs(g, vis, stk, dfsvis, g[i][j], flag);
            }
            if(dfsvis[g[i][j]])
            {
                flag  = 1;
                return;
            }
            
        }
        if(!flag)
        {
        dfsvis[i] = 0;
        stk.push(i);
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses, vector<int>());
        for(int i = 0; i<prerequisites.size(); i++)
        {
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];
            adj[u].push_back(v);
        }
        stack<int>stk;
        vector<int>dfsvis(numCourses, 0);
        vector<int>visited(numCourses, 0);
        bool flag  = 0;
        for(int i = 0; i<numCourses; i++)
        {
            if(!visited[i])
            {
                dfs(adj, visited, stk, dfsvis, i, flag);
            }
        }
        vector<int>ans;
        while(!stk.empty())
        {
            int  x = stk.top();
            ans.push_back(x);
            stk.pop();
        }
        if(!flag) return ans;
        else return {};
    }
};

int main()
{
    // take the input for prerequisites and num courses and pass it to the findOrder function.
}