#include<iostream>
using namespace std;


struct node {
int info;
node * link;
};

node * front,*rear;


void insertQ(int item)
{
node *t = new node;
t->info= item; t->link= NULL ;

if (front== NULL)
{
front= t ; rear= t ;

}
else{
rear->link= t;

rear=t;
}
cout<<"inserted into Q "<<item<<endl;
}

int delQ()
{
if(front ==NULL)
{
cout<<"underflow "<<endl;
return -1;
}
node *temp= front;
int item= front->info; //temp->info
front = front->link;
delete temp;
return item;
}


void traverseQ()
{
node * p= front;
while(p!= NULL)
{
cout<<p->info<<" ";
p=p->link;
}
cout<<endl;
}
int main()
{
insertQ(20); insertQ(12);insertQ(27); insertQ(127);
insertQ(230); insertQ(112);insertQ(250); insertQ(172);
cout<<"deleted from Q "<<delQ()<<endl;
traverseQ();
}
