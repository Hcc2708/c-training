#include<iostream>
using namespace std;

void Merge(int a[],int p, int q, int r)
{
 int n1 = q-p+1;
 int n2 = r-q;
 int L[n1],R[n2];
 int i, j,k;
 for (i=0;i<n1;i++)
 {
  L[i]=a[p+i];
 }
 for (j=0;j<n2;j++)
 {
  R[j]=a[q+j+1];
 }
 i=0,j=0,k=p;
 while(i<n1 && j<n2)
 {
   if (L[i]<=R[j])
   {
     a[k]=L[i];
     i++;
   }
   else
     {
       a[k]=R[j];
       j++;
     }
    k=k+1;}
 while(i<n1)
 {
  a[k]=L[i];
  i++;
  k++;
 }
  while(j<n2)
 {
  a[k]=R[j];
  j++;
  k++;
 }
 }

void MergeSort(int a[],int p,int r)
{
 if (p<r)
 {
    int q=(p+r)/2;
    MergeSort(a,p,q);
    MergeSort(a,q+1,r);
    Merge(a,p,q,r);
 }
}
int main()
{
 int a[]={1,3,5,6,2,4,8,10};
 int r=sizeof(a)/sizeof(a[0]);
 int p=0;
 MergeSort(a,p,r-1);
 for(int i=0;i<r;i++)
 {
     cout<<a[i]<<" ";
 }
}
