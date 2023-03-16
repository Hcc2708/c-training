#include<iostream>
#include<vector>
using namespace std;
int findDegree(vector<int>&arr)
{
    int n = arr.size();
    int arr1[n];
    for(int i = 0; i<n; i++)
    {
        int count1 =0;
        for(int j =0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count1++;
            }
        }
        arr1[i] = count1;
    }
    int max1 = arr1[0];
    for(int i = 0; i<n; i++)
    {
        if(arr1[i] > max1)
        {
            max1 = arr1[i];
        }
    }
    cout<< "the degree of array is : " << max1;
}
int main()
{
    vector<int>arr = {1,2,2,3,4,2,5,6};
    findDegree(arr);
}
