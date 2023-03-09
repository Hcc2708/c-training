#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int>node;
        if(head == NULL) return NULL;
        if(head->next == NULL) 
        {
            return NULL;
        }
        ListNode *ptr = head;
        node[ptr]= 1;
        while(ptr->next != NULL)
        {
            if(!node[ptr->next])
            {
                node[ptr->next] = 1;
                ptr = ptr->next;
            }
            else return ptr->next;
        }
        return NULL;
    }
};