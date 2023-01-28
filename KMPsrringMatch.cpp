#include<iostream>
using namespace std;
void calculateLsp(int lsp[], int M, string P)
{
    int len = 0;
    lsp[0] = 0;
    int i = 1;
    for(;i<M;)
    {
        if(P[len] == P[i])
        {
            len++;
            lsp[i] = len;
            i++;
        }
        else 
        {
            if(len >0)
            {
                len = lsp[len-1];
            }
            else if(len ==0)
            {
                lsp[i] = 0;
                i++;
            }
        }
    }
}
int matchString(string T, string P)
{
    if(P.size() == 0)return -1;
    int N = T.size();
    int M = P.size();

    int lsp[M];
    calculateLsp(lsp, M, P);
    int j = 0;
    for(int i =0; i<N;)
    {
        if(T[i] == P[j])
        {
            i++;
            j++;
        }
        if(j==M)
        {
            return i-M;
        }
        else if(i<N && T[i] != P[j])
        {
            if(j != 0)
            {
                j = lsp[j-1];
            }
            else i++;
        }
    }
   return -1;
}

int main()
{
    string T;
    getline(cin, T);
    string P;
    getline(cin, P);
    int index = matchString(T, P);
    cout<<"String found at index: "<<index;
}