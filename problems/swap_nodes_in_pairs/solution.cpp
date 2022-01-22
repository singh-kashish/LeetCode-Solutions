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
        if(!head or !head->next)return head;
        ListNode * curr = head, *next;
        head = head->next;
        while(curr and curr->next){
            next = curr->next->next;
            curr->next->next = curr;
            if(!next)curr->next = NULL;
            else if(next and !next->next)curr->next = next;
            else curr->next = next->next;
            curr = next;
        }
        return head;
    }
};