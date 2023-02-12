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
cout<<"inserted node "<<item<<endl;
}

void traverse()
{
struct node* ptr= start;
while(ptr!= NULL)
{
cout<<ptr->data<<" ";
ptr= ptr->link;
}
cout<<endl;
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

void insertLast(int item)
{

struct node * t= new node;
t->data= item; t->link= NULL;

if(start== NULL)
{
start=t;
}
else
{
struct node *p= start;
while( p->link!= NULL)
{
p= p->link;
}
p->link= t;
}


}

void delFirst()
{

if(start==NULL)
{
cout<<"List is empty "<<endl; return;
}
else if(start->link==NULL)
{
node *p= start;
start= NULL;
delete p;
}
else
{
node *p= start;
start= start->link;
delete p;
}

}
void delLast()
{
if(start==NULL)
{
cout<<"List is empty "<<endl; return;
}
else if(start->link==NULL)
{
node *p= start;
start= NULL;
delete p;
}
else
{
node *t,*p; p= start;
while(p->link!=NULL)
{
t=p;
p=p->link;
}

t->link= NULL;
delete p;
}
}

void delNode(int item)
  {
     node* ptr;
   node* TEMP;
   ptr=start; TEMP=start;
if(start==NULL)
{
cout<<"List is empty "<<endl; return;
}
else
    if(ptr->data==item&&start->link==NULL)
{
    start=NULL;
    delete ptr;
    return;
}
else   if(ptr->data==item)
{
    start=ptr->link;
    delete ptr;
    return;
}
else{

    while(ptr!=NULL)
 {

 if(ptr->data==item)
  {
    TEMP->link = ptr->link;
    delete ptr;
    return;
  }
  else
   {
    TEMP = ptr;
    ptr = ptr->link;
    }}
 }
}

int main()
{
insertLast(30);
insertBegin(20);
insertBegin(12);
insertBegin(44);
traverse();
insertBegin(55);
insertBegin(11);
insertLast(100);
traverse();
delLast();
delFirst();
cout<<endl<<"after delete first\n";
traverse();
delNode(55);
traverse();
}
