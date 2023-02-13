#include<iostream>
using namespace std;
struct node
{
 int data;
 struct node* next;
};
struct node* start;
void insertBegin(int item)
{
  node* p = new node;
  p->data=item;
  if(start==NULL)
  {
   start=p; start->next=NULL;
  }
  else
  {
    p->next=start;
    start=p;
  }
}
int countNodes()
 {
     if(start==NULL)
     {
        cout<<"List is empty";
        return 0;
     }
     else
     {
         int Count = 0;
         node* p = start;
         while(p!=NULL)
         {
             Count++;
             p=p->next;
         }
         return Count;
     }
 }
 node* getMaxNode()
 {
     if(start==NULL)
     {
         cout<<"List is Empty";
         return NULL;
     }
     else
     {
         node* p, *temp ;
         p=start;
         temp=start;
         while(p->next!=NULL)
         {
             if(temp->data>=p->next->data){}
             else{temp=temp->next;}
          p=p->next;
         }
         cout<<"\n Maximum data value in nodes : "<<temp->data;
         return temp;
     }
 }
void insertBeforeNode(int item,int d)
{
  if(start==NULL)
  {
    return;
  }
  else
  {  node* p = new node;
      p->data=d;
      node* t,*temp=start;
      t=start;
      if(t->data==item)
      {
          p->next=start;start=p;
      }
      else
   {
       while(temp->next!=NULL)
      {
          if(temp->next->data==item)
            //t=temp;
            break;
          else
            temp=temp->next;
      }
      if(temp->next==NULL)
      { return ;}
      else{
      p->next=temp->next;
      temp->next=p;}
    }
  }
}
void Reverse()
{
    if(start==NULL)
    {
        cout<<" list is empty";return;
    }
    else
        if(start->next==NULL)
        {
         cout<<" having only single node which can considered as reversed itself"; return;
        }
        else
        {
        node* p, *t;
        t=start, p=start->next;
        start->next=NULL;
        while(p!=NULL)
        {
            start=p;
            p=start->next;
            start->next=t;
            t=start;
        }
        }

}
void traverse()
{
  if(start==NULL)
   {cout<<"list is empty";}
  else
  { node* p;
    p=start;
    while(p!=NULL)
    {
     cout<<p->data<<" ";
     p=p->next;
    }
  }
}


int main()
{
 insertBegin(23);
 insertBegin(24);
 insertBegin(63);
 insertBegin(97);
 insertBegin(12);
 insertBegin(101);
 traverse();
 cout<<"\nTotal number of Nodes present in list "<<countNodes();
 node *p =getMaxNode();
 cout<<"\n Address of node which has maximum data value: "<<p;
 insertBeforeNode(23,33);
 cout<<"\n\n";
 traverse();
 cout<<"\n";
 Reverse();
 cout<<"\n Reversed linked list is : ";
 traverse();
 cout<<"\n";
}
