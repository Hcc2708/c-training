#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() == 1) return s;
        int x = s.size();
        for(int i = 0; i<s.size();)
        {
            if(k <= x)
            {
                int n = i;
                int j = i + k-1;
                while(n<j)
                {
                    swap(s[n], s[j]);
                    n++;
                    j--;
                }
            }
            else
            {
                int n = i;
                int j = s.size()-1;
                while(n <j)
                {
                    swap(s[n], s[j]);
                    n++;
                    j--;
                }
            }
            x =x-2*k;
            i += 2*k;
        }
        return s;
    }
};