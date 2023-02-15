#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>&graph, vector<int>&vis, vector<vector<int>>&ans, deque<int>&topo, int i)
    {
        if(i != graph.size() -1)
        {
            vis[i] = 1;
            
            for(int j : graph[i])
            {
                if(!vis[j])
               { topo.push_back(j);
                dfs(graph, vis, ans, topo, j);}
                
                vis[j] = 0;
                topo.pop_back();

            }
        }
        else if( i == graph.size()-1)
        {
            vector<int>i_ans;
            if(!topo.empty())
            {
                int x = topo.front();
                topo.pop_front();
                topo.push_back(x);
                if(vis[x] == 1) i_ans.push_back(x);
            
            while(topo.front() != 0)
            {
                int x = topo.front();
                if(vis[x] == 1)
                {
                    i_ans.push_back(x);
                }
                topo.pop_front();
                topo.push_back(x);
            }
            }
            i_ans.push_back(i);
            ans.push_back(i_ans);
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>visited(graph.size(), 0);
        vector<vector<int>>ans;
        deque<int>topo;
        topo.push_back(0);
        dfs(graph, visited, ans, topo, 0);
        return ans;
    }
};

int main()
{
    // pass the values for graph from here.
}