#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode * head;
    Solution(ListNode* head) {
        this->head  = head;
    }
    
    int getRandom() {
        int cnt = 0;
        ListNode *ptr = head;
        while(ptr != NULL)
        {
            cnt++;
            ptr = ptr->next;
        }
        int i =  rand() % cnt;
        ptr = head;
        for(int x = 0; x < i; x++)
        {
            ptr = ptr->next;
        }
        return ptr->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */