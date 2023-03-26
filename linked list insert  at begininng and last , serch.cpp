#include<iostream>
using namespace std;

struct node{
int data;
 struct node* link; /// ** Here we have declare the link pointer as a node data type because this link has to point another node and if it will
 char c ;                   /// be another data type than how it will take the address of another node .. only void pointer can hold the address of
                    /// another data type .. but i think void pointer will not work here
};

struct node* start;/// because this will also hold the address of node and will need to points the data types of structure node without structure
                   /// object how we will point the structure's data type like int data and *link this statement is also applicable in same manner
                   /// for *t here

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

node * search(int item)  /// pointer function used to store the address of function /// node is user defined data type here its used as a return
                         /// type of another node
{
struct node * ptr= start;
while(ptr!= NULL) /// here we can use ZERO (0) also instead of NULL
{
if(item== ptr->data)
{
cout<<"search successful "<<endl;
return ptr;
}
else
{
ptr= ptr->link;
}
}
cout<<"not found"<<endl;
return NULL;
}
void insertAfterValue(int val, int d)
{
 struct node* t = new node;
 struct node* ptr;
 t->data = d;
 if (start== NULL)
 {
     start=t; t->link=NULL;
 }
 else
 {
     ptr=start;
     while(ptr!=NULL)
     {
         if(ptr->data==val)
           break;
         else
          ptr=ptr->link;
     }
     if(ptr==NULL)
     { return;     }
     else
     {
     t->link=ptr->link;
     ptr->link=t;
     }
     return;
 }
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
p= p->link;///here this link already points to another node which has one another address of link pointer
}          /// so its keep on assigning the next node address it will not affect its previous address
p->link= t;
}

}
void display(node* head)
{
    if(head==NULL)
    {
        return;
    }
    display(head->link);
    cout<<head->data<<" " ;
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
insertAfterValue(44,45);
///insertAfterValue(49,50);
traverse();
struct node * res=search(55);
cout<<res->data<<endl;
cout<<res->link;
search(60);cout<<endl;
traverse();
cout<<endl<<endl<<"for practice question"<<endl;
display(start);cout<<endl;
traverse();
}
