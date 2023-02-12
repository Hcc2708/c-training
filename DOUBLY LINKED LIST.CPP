#include<iostream>
using namespace std;
struct node
{
 int data;
 struct node* next;
 struct node* prev;
};

struct node* start,*last;

void insertBegin(int item)
{
  node* New = new node;
  New->data=item;
  if(start==NULL)
  {
   start=New;
   last = New;
   start->prev=NULL;
   last->next=NULL;
  }
  else
  {
    node* p = start;
    start = New;
    p->prev=start;
    start->next=p;
    start->prev=NULL;
  }
}
void insertLast(int item)
{
   node* New = new node;
   New->data=item;
   if(start==NULL)
   {
       start=New;
       last=New;
       start->prev= NULL;
       last->next=NULL;
   }
   else
   {
       node* p=last;
       last = New;
       last->next=NULL;
       last->prev=p;
       p->next=last;
   }
}
void insertAfterValue(int value, int item)
{

    if(start==NULL)
    {
      cout<<" linked list is empty" ; return;
    }
    else
    {
        node* New=new node;
        New->data=item;
        node* p = start;
        while(p->data!=value)
        {
            p= p->next;
        }
        New->prev=p;
        New->next=p->next;
        p->next->prev=New;
        p->next=New;
     cout<<p->next<<"  "<<p->next->next->prev<<endl; /// This is for only to check weather the linked list is working properly or not
    }
}
void deleteFirst()
{
    if(start==NULL)
    {
        cout<<" linked list is empty "; return;
    }
    else if(start->prev==NULL && start->next==NULL)
    {
        node* p = start;
        start=NULL;
        last=NULL;
        delete p;
        return;
    }
    else
    {
        node* p=start;
        start=start->next;
        start->prev=NULL;
        delete p;
        return;
    }
}
void traverse()
{
 if(start==NULL)
 { cout<<"list is empty "; return;}
 else
 {
  node* p =start;
  while(p!=NULL)
  {
   cout<<p->data<<" ";
   p=p->next;
  }
  cout<<endl;
 }
}


int main()
{
 insertBegin(34);
 insertLast(35);
 insertAfterValue(34,36);
 traverse();
 deleteFirst();
 traverse();

}
