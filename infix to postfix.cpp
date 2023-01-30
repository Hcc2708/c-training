#include<iostream>
using namespace std;
struct node
{
  string data;
  struct node* next;
};
struct node * Top;

insertOnStack(string item , string S2)
{
  node* new_node= new node;
  if (Top==NULL)
  {
   new_node->data = item;
   new_node->next = Top;
   Top= new_node;
  }
  if(item == "(")
  {
   new_node->data = item;
   new_node->next = Top;
   Top= new_node;
  }
  else if(Top->data!="("&&Top->data.compare(item)!=(0||1))
  {
   new_node->data = item;
   new_node->next = Top;
   Top= new_node;
   return 0;
  }
  else{
        if (item!=")")
          while(Top->data>item&& Top->data!="(")
          {
               node * ptr = Top;
               S2.append(ptr->data);
               Top=Top->next;
               delete ptr;
          }
        else
        {
            while(Top->data!="(")
          {
               node * ptr = Top;
               S2.append(ptr->data);
               Top=Top->next;
               delete ptr;
          }
          node *ptr = Top;
          Top = Top->next;
          delete ptr;
        }
  insertOnStack(item,S2);
  }

}
int main()
{
 string s1,S2;
 cout<<"Enter the infix operation";
 cin>>s1;
 s1.append(")");
 cout<<s1;
 insertOnStack("(",S2);
 int i = 0;
 while (i<s1.length())
 {
   if(s1.at(i)==("+" || "-"|| "/"||"*"||"^"||"("))
   {
    insertOnStack("s1.at(i)",S2);
   }
   else
   {
    S2.push_back(s1.at(i));
   }
   i++;
 }
 cout<<S2;
}
