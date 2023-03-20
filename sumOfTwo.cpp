#include<iostream>
#include<vector>
using namespace std;
int sumOfTwo(vector<int>num, int target)
{
    int n = num.size();
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(target-num[i] == num[j])
            {
                if(i != j)
                cout<<num[i]<<" "<<num[j]<<endl;

            }
        }
    }
}
int main(){
    vector<int>num = {1,2,3,4,5,6};
    int target;
    cin>>target;
    sumOfTwo(num, target);
}
