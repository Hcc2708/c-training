#include<iostream>
using namespace std;

struct node{
int data;

struct node * link;

};

struct node* start;

void insertBegin(int item)
{
struct node* t= new node;
t->data= item;
if(start==NULL)
{
start= t; t->link= NULL;
}
else
{
t->link= start;
start= t;
}
}

void traverse()
{
struct node* ptr= start;
while(ptr!= NULL)
{
cout<<ptr->data<<" ";
ptr= ptr->link;
}
}

node * search(int item)
{
struct node * ptr= start;
while(ptr!= NULL)
{
if(item== ptr->data)
{
cout<<"search successful "<<endl; return ptr;
}
else
{
ptr= ptr->link;
}
}
cout<<"not found"<<endl;
return NULL;
}

int main()
{

insertBegin(20);
insertBegin(12);
insertBegin(44);
insertBegin(55);
insertBegin(11);
traverse();
struct node * res=search(55);
cout<<res->data<<endl;
cout<<res->link<<endl;
search(60);

}
