class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = 0;
        int sum = 0;
        int j = people.size()-1;
        int i = 0;
        while(i <= j)
        {
            if(i != j)
            sum = people[i] + people[j];
            else sum = people[i];
            if(sum > limit)
            {
                ans++;
                sum = 0;
                j--;
            }
            else
                {
                    ans++;
                    i++; 
                    j--;
                    sum = 0;
                }
        }
        return ans;
    }
};