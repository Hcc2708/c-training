class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<pair<int, int>>q;
        for(int i =0; i<grid.size(); i++)
        {
            for(int j =0; j< grid[i].size(); j++)
            {
                if(grid[i][j] == 1) q.push_back({i, j});
            }
        }
        // cout<<q.size();
        // for(int i = 0; i<q.size(); i++)
        // cout<<q[i].first<<" "<<q[i].second<<endl;
        if(!q.size()) return -1;
        int level = 0;
        for(int j = 0; j<q.size();)
        {
            vector<pair<int, int>>q1;
            for(int l = 0; l<q.size(); l++)
            {
                int x = q[l].first;
                int y = q[l].second;
                vector<pair<int, int>>per = {{x+1, y}, {x, y+1}, {x-1, y}, {x, y-1}};
                for(int i = 0; i<per.size(); i++)
                {
                    int n = per[i].first;
                    int m = per[i].second;
                    if((n>=0 && n< grid.size()) && (m>=0 && m<grid.size()))
                    {
                        if(grid[n][m] == 0)
                        {
                            grid[n][m] = 1;

                            q1.push_back({n, m});
                        }
                    }
                }
                
            }
            q = q1;
            level++;
        }
        if(level == 1) return -1;
        return level-1;

    }
};