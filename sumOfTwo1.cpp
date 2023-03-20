#include<iostream>
#include<vector>
using namespace std;
vector<int> sumOfTwo(vector<int>num, int target)
{
    int n = num.size();
    int j = n-1;
    for(int i = 0; i<j;)
    {
       if(num[i]+num[j] == target)
       return {i,j};
       else if(num[i]+num[j] > target)
       j--;
       else if(num[i]+num[j] < target)
       i++;

    }
    return {-1, -1};
}
int main(){
    vector<int>num = {1,2,3,4,5,6};
    int target;
    cin>>target;
    vector<int>num2 = sumOfTwo(num, target);
    cout<<num2[0]<<" "<<num2[1];
}
