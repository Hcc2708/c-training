#include<iostream>
using namespace std;
class Lnode{
    public:
    int val;
    Lnode *next;
    Lnode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
Lnode* reverse(Lnode *head, Lnode* ptr)
{
    if(head == NULL)
    {
        ptr = ptr->next;
        return ptr;
    }
    Lnode *temp = ptr->next;
    ptr->next = head;
    head = head->next;
    ptr->next->next = temp;
    return reverse(head, ptr);

}
int main()
{
    Lnode *head = new Lnode(0);
    Lnode *ptr = head;
    for(int i =1; i< 8; i++)
    {
        Lnode *temp = new Lnode(i);
        ptr->next = temp;
        ptr = ptr->next;
    }
    Lnode *ptr2 = new Lnode(0);
    Lnode * ptr3 = reverse(head, ptr2);
   
    while(ptr3 != NULL)
    {
        cout<<ptr3->val<<" ";
        ptr3  = ptr3->next;
    }
}