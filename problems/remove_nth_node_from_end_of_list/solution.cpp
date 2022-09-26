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
        ListNode *startBeforeHead = new ListNode(-1);
        startBeforeHead->next = head;
        ListNode *slow = startBeforeHead,*fast=startBeforeHead;
        for(int i=0;i<n and fast;i++){
            fast = fast->next;
        }
        while(fast and fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return startBeforeHead->next;
        
    }
};