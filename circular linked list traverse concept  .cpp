void traverse()
{
struct node* ptr= start;
do
{                      /// do not use while over here because we are already starting the ptr= start and if we will write here while(ptr!=start)
                       /// then the loop will gets terminated in  first comparison and if we will write while(ptr->link!=start) then the linked
                       /// list which has only one element will not printed
cout<<ptr->data<<" ";
ptr= ptr->link;
}
while(ptr!=start);
cout<<endl;
}

 /// create one another program to an element of linked list which has only on element and it should print both start and link address
