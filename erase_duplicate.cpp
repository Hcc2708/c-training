#include<iostream>
#include<vector>
using namespace std;
vector<int> removeDuplicat(vector<int>num)
{
    int size1 = num.size();
    vector<int>ans1;
    ans1.push_back(num[0]);
    for(int i = 1; i<size1; i++)
    {

        if(num[i-1] == num[i])
        {
            continue;
        }
        else
        ans1.push_back(num[i]);

    }
    return ans1;
}
int main(){
    vector<int>num = {1,2,2,2,3,3,4,4};
    vector<int>num2 = removeDuplicat(num);
    for(auto i = num2.begin(); i< num2.end(); i++)
    {
        cout<<*i<<" " ;
    }

}
