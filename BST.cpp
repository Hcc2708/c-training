#include<iostream>
using namespace std;
struct node
{
 int info;
 struct node *Right, *Left;
};
struct node *root, *par;

node* Find(int item)
{
  par=NULL;
 if (root==NULL)
 {
  par=NULL;
  return NULL;
 }
  node* PTR, *SAVE,*LOC;
  PTR=root,SAVE=NULL;
  while(PTR!=NULL)
  {
   if(item==PTR->info)
   {
     LOC=PTR;
     par=SAVE;
     return LOC;
   }
   else if (item<PTR->info)
   {
    SAVE=PTR;
    PTR=PTR->Left;
   }
   else
    {SAVE=PTR,PTR=PTR->Right;}
  }
  par=SAVE;
  return NULL;
}
void Insert(int item)
{
 node *LOC= Find(item);
 if(LOC!=NULL)
 {return;}
 else
  {
    node* t =new node;
    t->info=item;
    //LOC=t;
    t->Left=t->Right=NULL;
  if(par==NULL)
  {root=t;}
  else if(item<par->info)
  {par->Left=t;}
  else
  {par->Right=t;}
  }
}
void inorder(struct node *r)
{
    if(r!=NULL)
    {
        inorder(r->Left);
        cout<<r->info<<"\t";
        inorder(r->Right);
    }
}
void preorder(struct node*r)
{
 if(r!=NULL)
 {
  cout<<r->info<<"\t";
  preorder(r->Left);
  preorder(r->Right);
 }
}

int main()
{
Insert(20);
Insert(30);
Insert(25);
preorder(root);
cout<<"\n";
inorder(root);
}
