#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int *insert(int arr[], int d, int index, int n){ /// this is a function to pointer declaration returning pointer to an array
    if(n = 0) return NULL;
    n = n-2;
    //int size_of_array = sizeof(arr)/sizeof(int);  won't work with formal parameter of array it will only work with the original one
    while(n>= index)
    {
        arr[n+1] = arr[n];
        n--;
    }
    arr[index] = d;
    //for(int x: arr) cout<<x<<" ";  it won't work here, will only work with the original one.
    return arr;
}
int main(){
    int n, d, index, *ptr;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Entr the array elements:";
    for(int i = 0; i<n-1; i++) cin>>arr[i];

    cout<<"Enter the element which you want to insert: ";
    cin>>d;
    cout<<"Enter the index at  which you want to insert the element : ";
    cin>>index;
    ptr = insert(arr, d, index, n);
    for(int x: arr) cout<<x<<" "; 
    for(int i = 0;i<n; i++)
    cout<< *(ptr + i);

}