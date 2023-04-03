class Solution {
public:
    static bool cmp(int &a, int &b)
    {
        return a > b;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(), potions.end(), cmp);
        for(int x : potions) cout<<x <<" ";
        for(int i = 0; i< spells.size(); i++)
        {
            
            long long x = spells[i];
            int lb = 0;
            int ub = potions.size()-1;
            while(lb <= ub)
            {
                int mid = (lb+ub)/2;
                long long z = potions[mid];
                long long y = 1;
                if(mid-1 >= 0)
                y = potions[mid-1];

                if(x * z < success && x * y  >= success) 
                {
                    ans.push_back(mid);
                    break;
                }
                if(x * z < success && mid == 0) 
                {
                    ans.push_back(0);
                    break;
                }
                else if(x * z >= success && mid == potions.size() -1) 
                {
                    ans.push_back(mid+1);
                    break;
                }
                else if(x * z >= success) lb = mid+1;
                else if(x * z < success && x * y < success) ub = mid-1;

            }
            
           
        }
        return ans;

    }
};