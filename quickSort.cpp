#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int r, int p)
{
    int pivot = arr[p];
    int tail = r-1;
    for(int i = r; i< p; i++)
    {
        if(arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[tail+1];
            arr[tail+1] = temp;
            tail++;
        }
    }
    swap(arr[p], arr[tail+1]);
    return tail+1;
}
void QuickSort(int arr[],int r,int p)
{
    if(r<p)
    {
        int x = partition(arr, r, p);
        QuickSort(arr, r, x-1);
        QuickSort(arr, x+1, p);
    }
}
int main()
{
    int arr[] = {1,3,5,3,8,9,0};
    int arrSize = sizeof(arr)/sizeof(int)-1;
    QuickSort(arr,0, arrSize);
    cout<<"the sorted array is : ";
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}