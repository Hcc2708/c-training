#include<iostream>
#include<vector>
using namespace std;
int runningSum(vector<int>sum)
{
    int sum1=0;
    for(int i =0; i<sum.size();i++)
    {
        sum1 = sum1+ sum[i];
        cout<<"running sum at index " << i<<" : "<<sum1<<endl;
    }
}
int main(){
    vector<int>num = {1,2,3,4,5,5};
    runningSum(num);
}
