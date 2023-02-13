#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "a12b56c1";
    map<char, int>graph;
    stringstream s5(str);
    char c;
    int x;
    while(s5>>c>>x)
    {
        graph[c] += x;
    }

    string s = "";
    for(char chr = 'a'; chr<='z'; chr++)
    {
        if(graph[chr])
        {
            s += chr;
            string s1 = to_string(graph[chr]);
            s += s1;
        }

    }
    cout<<s;
}