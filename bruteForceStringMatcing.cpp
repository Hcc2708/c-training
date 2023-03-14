#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n =  haystack.size();
        int m = needle.size();
        for(int i = 0; i< n-m+1; i++)
        {
            if(haystack[i] == needle[0])
            {
                int k = 0;
                for( ; k<m; k++)
                {
                    if(needle[k] == haystack[i+k]) continue;
                    else break;
                }
                if(k == m)
                return i;
            }
        }
        return -1;
    }
};