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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL or head->next==NULL and n>=1)return NULL;
        ListNode *start = new ListNode(NULL);
        start->next = head;
        ListNode *slow = start, *fast = start;
        for(int i=0;i<n and fast;i++)fast=fast->next;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        if(slow and slow->next)slow->next= slow->next->next;
        return start->next;
    }
};