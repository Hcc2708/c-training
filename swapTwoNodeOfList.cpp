/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        else if(head->next == NULL) return head;
        ListNode *temp = head;
        int flag = 1;
        ListNode *ptr, *ptr2;
        ptr = temp;
        ptr2 = ptr->next;
        ptr->next = ptr2->next;
        ptr2->next = ptr;
        temp = ptr2;
        ptr2 = ptr->next;
        if(ptr2 != NULL)
        while(ptr2->next!= NULL)
        {
            ptr->next = ptr2->next;
            ptr2->next = ptr->next->next;
            ptr->next->next = ptr2;
            ptr = ptr2;
            ptr2 = ptr2->next;
            if(ptr2 == NULL) break;
        }
        return temp;
    }
};
int main()
{
    // create a list and pass the head of list to the swapPairs function.
}