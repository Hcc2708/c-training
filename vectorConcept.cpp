#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> nums = {{1,2}, {2,3}, {3,5}};
    vector<vector<int>> ::iterator it;
    it = nums.begin();
    
    nums.erase(it);
    it = it+1;
    cout<<typeid(it).name();
    auto i = it->begin();
    cout<< *i; 
    //cout<<nums[0][1];
    for(auto x = nums.begin(); x != nums.end(); x++)
    {
        for(auto y = x->begin(); y!= x->end(); y++)
        {
            cout<< *y << " ";
        }
    }
}