#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
    
        double temp ;
        if(n==0) return 1;
        temp = myPow(x, n/2);
        if(n >= 0)
        {if(abs(n)%2 == 0)
        return temp*temp;
        else return temp*temp*x;}
        else 
        {
            if(abs(n) %2 == 0)
            return 1/(temp*temp);
            else return 1/(temp*temp*x);
        }
    }
};