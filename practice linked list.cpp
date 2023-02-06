#include<iostream>
 using namespace std;
 struct node
 {
  int data;
  struct node* next;
 };

 struct node* head;

 void insertAftervalue(int value, int dt)
 {
   struct node* N = new node;
   struct node* p;
   N-> data = dt;
   if(head==NULL)
   {
    head=t; t->next=NULL;
   }
   else
   {
     p = head;
     while(p->next!=NULL) /// p->next = is value of next and the value of next is address of next node
      {
        if(p->data==value)
            break;
        else
          p=p->next
      }
    t->next=p->next;
    p->next=N;
   }
 }
 void traverse()
 {
   struct node* ptr;
   ptr = head;
   while(ptr->next!=NULL)
   {
     cour<<ptr->data<<" ";
     ptr=ptr->next;
   }
 }
 int main()
 {
 insertAftervalue(4, 5);
 traverse();
 }
