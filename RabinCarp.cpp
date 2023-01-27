#include<iostream>
#include<math.h>
using namespace std;
#define d 10 
#define q 11
int calculateHash(int m)
{
    int h =1;
    for(int i = 1; i<m; i++)
    {
        h *= d%q;
    }
    return h;
}
int main()
{
    string T;
    cout<<"Enter the text : ";
    getline(cin, T);
    int n = T.size();
    string P;
    cout<<"Enter the pattern : ";
    getline(cin, P);
    
    int m = P.size();
    //int h = int(pow(d, m-1))%q; 
    int h = calculateHash(m);
    cout<<h<<endl;
    int t = 0;
    int p = 0;

    for(int i = 0; i<m; i++)
    {
        t = (t*d + (T[i] - '0'))%q;
        p = (p*d + (P[i] - '0'))%q;
    }
    // cout<<m<<" "<< n;
    // cout<<endl<<t<< " "<<p;
    for(int s = 0; s<=(n-m); s++)
    {
        int flag = 1;
        if(p == t)
        {
            for(int j =0; j<m; j++)
            {
                if(P[j] == T[s+j])continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {cout<<"string found at index : "<< s;
            break;}
        }
        t = ((d*(t - (T[s] - '0')*h)) + (T[s+m]-'0')); 
        if(t<0) t = t%q+q;  // because the rule of modulus is that it can not be -ve but here in c++ % gives -ve and +ve both the values so we need to convert he -ve to +ve.
        else t = t%q;
        
    }
}
