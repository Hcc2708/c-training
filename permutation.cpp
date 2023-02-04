#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printPermutation(vector<char>arr, int i, int j)
{
    if(j>=arr.size()) 
    {
        for(int k = 0; k< arr.size(); k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        return;
    }
    printPermutation(arr, i+1, j+1);
    while(j<arr.size())
     {
        if(i+1 < arr.size()) 
    {
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
    j++;
    printPermutation(arr, i+1, j+1);
    // if(j+1 == arr.size())
    // {
    //     int temp = arr[j-1];
    //     arr[j-1]  = arr[j];
    //     arr[j] = temp;
        
    // }
    } 
    else break;
    }
}
int main()
{
    vector<char>arr{'A', 'B', 'C'};
    printPermutation(arr, 0, 0);
}