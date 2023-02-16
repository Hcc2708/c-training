#include<iostream>
using namespace std;

struct node{
int data;
node* link;
};
node * top;
void push(int item){
node * t= new node; /// (NEW = AVAIL)
if(t==NULL)/// this will check weather the memory is available for insertion or not like if(AVIL==NULL) (free pool concept), because linked list is DMA so we have to check with memory
    {cout<<"Overflow"<<endl; return;}
t->data= item;
t->link= top;
top= t;

cout<<"pushed "<<item<<endl;

}

int pop()
{
if(top==NULL) { cout<<"Underflow"<<endl; return -1;}

node * temp= top;
int item= temp->data;
top= top->link;
delete temp;
return item;
}

int main()
{

push(20);push(15);push(13); push(21);
push(21);push(5);push(131); push(231);
push(200);push(315);push(113); push(121);
cout<<pop()<<endl;
push(90);
}
