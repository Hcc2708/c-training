#include <iostream>
using namespace std;

struct node
{
int data;
struct node* next,*prev;

};
struct node* start,*last;
void insertBegin(int d)
{
node *t= new node;
t->data=d;

if(start==NULL)
{
start=t; last=t; t->prev=NULL; t->next=NULL;
}
else
{
t->prev=NULL;
t->next=start;
start->prev=t;
start=t;
}

}
void insertLast(int d)
{
node *t= new node;
t->data=d;

if(start==NULL)
{
start=t; last=t; t->prev=NULL; t->next=NULL;
}
else
{
t->prev=last;
t->next=NULL;
last->next=t;
last=t;
}
}

node * searchNode(int item)
{
if(start==NULL) { return NULL;}
node *p=start;
while(p!=NULL)
{
if(p->data==item) { return p;}

p=p->next;
}
return NULL;
}


void insertAfterNode(int item,int d)
{
node *p=searchNode(item);
struct node *t= new node; t->data=d;
if(p!=NULL)
{
if(p==last)
{
t->prev=last;
t->next=NULL;
last->next=t;
last=t;
}
else
{
t->prev=p;
t->next=p->next;
p->next->prev=t;
p->next=t;
}


}


}


void deleteFirst()
{
if(start==NULL){ cout<<"Underflow"<<endl;}
else if(start==last) { node *p=start; start=last=NULL; delete p; }
else
{
node *p=start;
start->next->prev=NULL;
start=start->next;
delete p;
}
}

void deleteLast()
{
if(start==NULL){ cout<<"Underflow"<<endl;}
else if(start==last) { node *p=start; start=last=NULL; delete p; }
else
{
node*p=last;
last->prev->next=NULL;
last=last->prev;
delete p;
}
}

void display()
{
if(start==NULL)
{
cout<<"List is empty"<<endl; return;
}
else
{
node *p=start;
cout<<" List contains -->";
while(p!=NULL)
{
cout<<p->data<<"\t";
p=p->next;
}
cout<<endl;
}
}





int main()
{

insertBegin(20);
insertBegin(22);
insertBegin(23);
insertLast(45);
insertAfterNode(23,15);
display();
deleteLast();
deleteFirst();
display();
}
