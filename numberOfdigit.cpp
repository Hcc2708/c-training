#include<iostream>
using namespace std;
bool numberOfdigit(string n, int lb, int ub)
{

    if(lb == ub) return true;
    if(n[lb++] == n[ub--])
    {
        bool x = numberOfdigit(n, lb, ub);
        return x;
    }
    else return false;
    
}
int main()
{
    bool x= numberOfdigit("namkn", 0, 4);
    cout<<x;
}