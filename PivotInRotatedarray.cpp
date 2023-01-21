#include<bits/stdc++.h>
using namespace std;
int pivotInRotatedArray(int arr[], int n)
{
    int lb = 0;
    int ub = n;
    while(lb <= ub)
    {
        int mid = (lb+ub)/2;
        if(arr[mid] < arr[mid-1])
        {
            return mid;
        }
        else if(arr[mid] > arr[n])
        {
            lb = mid +1;
        }
        else ub = mid -1;
    }
}
int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    cout<<pivotInRotatedArray(arr, 6);
}