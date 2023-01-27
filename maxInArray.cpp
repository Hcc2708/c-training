#include<iostream>
using namespace std;
int maxInArray(int arr[],int n, int max)
{
    if(n<0) return max;
    if(arr[n] > max) 
    {
        max = arr[n];
    }
    n--;
    return maxInArray(arr, n, max);
}
int main()
{
    int arr[] = {1,2,3,8,5,6};
    int n = sizeof(arr)/sizeof(arr[0]) -1;
    int x = maxInArray(arr, n, 0);
    cout<<x;
}