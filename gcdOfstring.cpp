#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool match(string s, string s3)
    {
        int m  = s3.size();
        int d =10;
        int q = 11;
        int h = int(pow(d, m-1))%q;
        int p =0;
        int t = 0;
        int c1 = 0;
        for(int i =0; i<m; i++)
        {
            p = (p*d + (s3[i] - 'A') + 1)%q;
            t = (t*d + (s[i] - 'A')+1)%q;
        }
        for(int i = 0; i<s.size()-m+1;)
        {
            if(p == t)
            {
                int j = -1;
                for( j = 0; j<m; j++)
                {
        
                    if(s3[j] == s[i+j])
                    continue;
                    else break;
                }
                if(j == m)
                {
                    c1++;
                    i = m*c1;
                }
                else 
                {
                    break;
                }
           }
            else break;
        }
        int x = s3.size() * c1;
        if(x == s.size())
        return true;
        else return false; 
    }
    string gcdOfStrings(string str1, string str2) {
        string s = str1.size()>str2.size()?str1:str2;
        string s2 = str1.size()<str2.size()?str1:str2;
        if(s.size() == s2.size())
        {
            s = str1;
            s2 = str2;
        }
        string s3 = "";
        char c = s[0];
        s3 = s3+c;
        for(int i =1; i<=s.size()/2; i++)
        {
            if(s[i] == c)
            {
                break;
            }
            s3 = s3 + s[i];
        }
        bool f1 = match(s, s3);
        bool f2 = match(s2, s3);
        if(f1 && f2)
        {
            return s3;
        }
        else return "";
    }
};
int main()
{
    Solution obj;
    string str= obj.gcdOfStrings("ABCABC", "ABC");
    cout<<str;
    cout<<("raj" == "raj");
}