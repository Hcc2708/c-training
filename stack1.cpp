#include<iostream>
using namespace std;

const int mcap=10;

int St[mcap];

int top= -1;

void push(int item){

if(top==mcap-1) {cout<<"Overflow"<<endl; return;}

top= top+1;
St[top]= item;
cout<<"pushed "<<item<<endl;

}

int pop()
{
if(top==-1) { cout<<"Underflow"<<endl; return -1;}

int *item= &St[top];
int a= *item;
int value = a;
top= top-1;
cout<<value<<" top= "<<top;
delete item;
return value; /// after deleting the address of value we can't return it to function
///delete vlaue;  don't use delete here because delete is used only with pointer or address it can delete St here because St is Address of array here
}
int peek()
{
    if(top==-1){return -1;}
    return St[top];
}

int main()
{

push(20);push(15);push(13); push(21);
push(21);push(5);push(131); push(231);
push(200);push(315);push(113); push(121);
cout<<"poped "<<pop()<<endl;
push(90);
cout<<endl<<" read stack, peek : "<<peek();
}
