#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *ptr): val(x), next(ptr){}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL)
        return NULL;
        else
        {
            ListNode *list3  = new ListNode;
           
            ListNode *ptr= list3;
            while(list1 != NULL && list2 != NULL)
            {
                if(list1->val <= list2->val)
                {
                    ptr->next = list1;
                    list1 = list1->next;
                }
                else
                {
                    ptr->next = list2;
                    list2 = list2->next;
                }
                ptr = ptr->next;
                
            }
            if(list1 !=NULL)
            {
                if(ptr == list1);
                else
               {ptr->next = list1;}
            }
            if(list2 != NULL)
            {
                if(ptr ==list2)
                {}
                ptr->next = list2;
            }
            list3 = list3->next;
            return list3;
        }
    }
};
int main()
{
    // create two sorted linked list and pass it to mergeTwoLists.
}