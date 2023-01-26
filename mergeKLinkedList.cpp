/**
 * Definition for singly-linked list.*/
 struct ListNode {
     int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    void merge(vector<ListNode*>& lists, ListNode *head, ListNode *ptr2)
    {
        ListNode *ptr = head;
        ListNode *temp = new ListNode, *temp2;
        temp2 = temp;
        while(ptr!=NULL && ptr2!= NULL)
        {
            if(ptr->val <= ptr2->val)
            {
               temp2->next = ptr;
               ptr = ptr->next;
               temp2 = temp2->next;
            }
            else 
            {
                temp2->next = ptr2;
                ptr2 = ptr2->next;
                temp2 = temp2->next;
            }
        }
        if(ptr != NULL) temp2->next = ptr;
        else if(ptr2 != NULL) temp2->next = ptr2;
        temp = temp->next;
        lists[0] = temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        for(int i = 1; i< lists.size(); i++)
        {
            merge(lists, lists[0], lists[i]);
        }
        return lists[0];
    }
};
int main()
{
    // create a vector of lists and pass it to mergeKlists it will return the head of k sorted lists.
}