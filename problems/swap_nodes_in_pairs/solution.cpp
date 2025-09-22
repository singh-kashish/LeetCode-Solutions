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
        if(!head || !head->next)return head;
        ListNode * dummy = new ListNode(0,head);
        ListNode * prev = dummy;
        while(prev->next && prev->next->next){
            // Get first and second node
            ListNode *first = prev->next;
            ListNode *second = first->next;
            // Swap pointers
            first->next = second->next;
            second->next = first;
            // Attach prev next to second which is actually at first now
            prev->next = second;
            // Attach prev to second of pair now, which was originally first
            prev = first;
        }
        return dummy->next;
    }
};