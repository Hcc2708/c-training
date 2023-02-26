#include<iostream>
using namespace std;
Max_Heapify(int A[],int i,int n)
{
 int largest;
 int l = 2*i+1;
 int r = 2*i+2;
 if(l<n && A[l]>A[i])
 {
  largest = l;
 }
 else
  largest = i;
 if (r<n && A[r]>A[largest])
  {
   largest=r;
  }
 if (largest!=i)
 {
   int temp = A[i];
   A[i]=A[largest];
   A[largest]=temp;
   Max_Heapify(A, largest,n);
 }

}
Build_Maxheap(int A[],int n)
{
 for(int i=(int(n/2)-1);i>=0;i--)
    {
     Max_Heapify(A,i,n);
    }
}
Heap_Sort(int A[],int n)
{
  Build_Maxheap(A,n);
  int Heapsize = n;
  for(int i=n-1;i>=1;i--)
  {
    int temp=A[0];
     A[0]=A[i];
     A[i]=temp;
     Heapsize=Heapsize-1;
     Max_Heapify(A,0,Heapsize);
  }
}

int main()
{
 int A[]={12,13,4,5,1,6};
 int n=(sizeof(A)/sizeof(A[0]));
 for(int i=0;i<n;i++)
 {
     cout<<A[i]<<" ";
 }

 Heap_Sort(A,n);
 cout<<"\n";
 for(int i=0;i<n;i++)
 {
     cout<<A[i]<<" ";
 }
}


/// In case of using index zero for first element then to find out the last parent index use int(length(array)/2)-1 and in case of zero is not
/// used for first element then use int(length(array)/2) only and for length of array in both the cases we have to include the index zero
/// to calculate length of array.
