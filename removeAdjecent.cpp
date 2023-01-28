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
void deleteAtK(Lnode *head, int k, int count1)
{
    if(head == NULL) return ;
    if(count1== k-1){
        if(head->next != NULL)
        {
        Lnode *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return;
        }
    }
    deleteAtK(head->next, k, count1++);

}
int main()
{
    Lnode *head = new Lnode(0);
    Lnode *ptr = head;
    for(int i =1; i< 4; i++)
    {
        Lnode *temp = new Lnode(i);
        ptr->next = temp;
        ptr = ptr->next;
    }
    deleteAtK(head, 2, 1);
    Lnode *ptr1 = head;
    while(ptr1 != NULL)
    {
        cout<<ptr1->val<<" ";
        ptr1  = ptr1->next;
    }
}