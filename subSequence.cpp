#include<iostream>
using namespace std;
bool subSequence(string s, string s1)
{
    int n = s.length()-1;
    int m = s1.length()-1;
    int j = 0;
    if(m>n)
    return false;
    for(int i = 0; i<n;)
    {
        if(s[i] == s1[j])
        {
            j++;
            i++;
            if(j >= m) return 1;
        }
        else if(s[i] != s1[j])
        i++;


    }
    return 0;
}
int main()
{
    string s, s1;
    cin>>s;
    cin>>s1;
    cout<<subSequence(s, s1);

}
