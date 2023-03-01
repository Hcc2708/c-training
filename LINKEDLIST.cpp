#include<iostream>
using namespace std;
struct node
{
 int data;
 struct node* link;
};
struct node *head;
void insert(int new_data)
{

struct node *new_node = (struct node*)malloc(sizeof(struct node));
new_node->data = new_data;
new_node->link = head;
head = new_node;
}

void display()
{
 node *ptr;
 ptr  = head;
 while(ptr!= NULL)
 {
  cout<<ptr->data<<" ";
  ptr = ptr->link;
 } }


int main()
{
 insert(1);
 insert(3);
 insert(4);
 insert(5);
 insert(7);
 display();
}
