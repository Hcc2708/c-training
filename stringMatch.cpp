#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt =  1;
        int i = 1;
        int j = 0;
        string s1 = "";
        for(; i< chars.size();i++)
        {
            if(chars[i] == chars[i-1])
            {
                cnt++;
            }
            else 
            {
               s1 +=  chars[i-1];
               if(cnt != 1)
               s1 += to_string(cnt);
               cnt = 1;
            }
        }
        s1 += chars[i-1];
        if(cnt != 1)
        {
            s1 += to_string(cnt);
        }

        for(; j< s1.size(); j++)
        {
            chars[j] = s1[j];
        }
        return j;
    }
};
int main()
{
    // Function call with arguments.
}