#include <iostream>
using namespace std;
void swap1(int *i,int *j){
    int *temp=i;
    i=j;
    j=temp;
    cout<<*i<<" is swapped with "<<*j<<endl;
}
int part(int a[],int p,int r){
    int pivot=a[r];
    int tail=p-1;
    for(int j=p;j<r;j++){
        if(a[j]<=pivot){
            tail++;
            swap1(&a[tail],&a[j]);
        }
    }
    swap1(&a[tail+1],&a[r]);
    return tail+1;
}
void quickSort(int a[],int p,int r){
    if(p<r){
        int q=part(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

void showarr(int a[],int r){
    for(int i=0;i<=r;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,35,6,6,12};
    int a_s=sizeof(arr)/sizeof(arr[0])-1;
    showarr(arr,a_s);
    quickSort(arr,0,a_s);
    showarr(arr,a_s);
}
