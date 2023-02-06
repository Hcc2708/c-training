#include<iostream>
using namespace std;
int arr[] = { 12, 11, 13, 5, 6, 7 };
int n =sizeof(arr) / sizeof(arr[0]);
int partition(int arr[], int p, int r)
{
int pivot=arr[r];
int tail=p-1;
for(int j=p; j<r;j++)
{
    if(arr[j]<=pivot)
    {
     cout<<endl<<arr[j]<<" getting swapped with "<<arr[tail+1]<<endl;
    tail=tail+1;
    int temp= arr[j];
    arr[j]=arr[tail];
    arr[tail]=temp;
    for(int i=0;i<n;i++)
	cout<<arr[i]<<"\t";
    }
}
 cout<<endl<<arr[r]<<" getting swapped with "<<arr[tail+1]<<endl;
  int temp=arr[r];
  arr[r]=arr[tail+1];
  arr[tail+1]=temp;
  for(int i=0;i<n;i++)
	cout<<arr[i]<<"\t";
return tail+1;
}
void QuickSort(int arr[], int p, int r)
{
	if (p < r) {

		int q = partition(arr,p,r);

		QuickSort(arr, p, q-1);

		QuickSort(arr, q + 1, r);

	}
}
int main()
{

	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout<<"Given array is \n";
	for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<"\t";

	QuickSort(arr, 0, arr_size - 1);

	cout<<"\nSorted array is \n";
    for(int i=0;i<arr_size;i++)
	cout<<arr[i]<<"\t";
	return 0;
}
