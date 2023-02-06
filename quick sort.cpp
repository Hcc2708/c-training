#include<iostream>
using namespace std;
int a[]={8,2,9,7,9,23,9};
int n = sizeof(a)/sizeof(a[0]);
int partition(int a[],int p,int r)
{
  int tail =p-1;
  int pivot=a[r-1];
  int j;
  for (j=p;j<r;j++)
  {
   if(a[j]<=pivot)
   {
     cout<<endl<<a[j]<<" getting swapped with "<<a[tail+1]<<endl;
     tail=tail+1;
     int temp = a[tail];
     a[tail]=a[j];
     a[j]=temp;
     for (int i = 0 ; i<n;i++)
         cout<<a[i]<<" ";
   }
  }
  return tail;
}
void quicksort(int a[], int p , int r)
{
if (p<r)
 { int q=partition(a,p,r);
   quicksort(a,p,q);
   quicksort(a,q+1,r);}
}
int main()
{
int p = 0;
int r = sizeof(a)/sizeof(a[0]);
quicksort(a,p,r);
}
