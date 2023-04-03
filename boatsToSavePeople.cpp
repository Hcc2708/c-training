class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = 0;
        int sum = 0;
        for(int i = 0; i< people.size(); i++)
        {
            
            sum += people[i];
            if(sum > limit)
            {
                ans++;
                sum = people[i];
            }

        }
        ans++;
        return ans;
    }
};