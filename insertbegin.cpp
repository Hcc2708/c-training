#include<iostream>
using namespace std;
int Q[10];
int f=-1, r=-1;
int mC = 4;

void insert(int item)
{
 if ((f==0 && r==9) || (f=r+1))
 {
   cout<<"Overflow";
   return ;
 }
 else if (f=-1)
  {
    f= 0 , r= 0;
  }
  else if(r==9)
  {
    r=0;
  }
  else
      r= r+1;
  Q[r]=item;
  cout<<" inserted value: " <<Q[r];
}
void display()
{
if(f==-1){cout<<"Queue is empty"<<endl;return;}
else if(f<=r)
{
for(int i=f; i<=r;i++)
cout<<Q[i]<<"\t";
}
else
{
for(int i=f; i<mC;i++)
cout<<Q[i]<<"\t";
for(int j=0;j<=r;j++)
cout<<Q[j]<<"\t";
}

}
int Qdel()
{
    if(f==-1){ return -1;}
int item=Q[f];
if(f==r)
    { f=-1; r=-1;}
else if(f==mC-1){f=0;}
else f=f+1;
cout<<"deleted "<<item<<endl;
return item;
}

int main()
{
 insert(23);
 insert(25);
 insert(26);
 insert(237);
 insert(234);
 insert(28);
 insert(43);
 insert(76);


 display();
}

