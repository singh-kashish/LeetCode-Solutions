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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return head;
        ListNode * dummy = new ListNode(NULL);
        dummy->next = head;
        ListNode *ahead = head, *back =dummy;
        while(ahead){
            if(ahead->val==val){
                ListNode * next = ahead->next;
                back->next = next;
                delete(ahead);
                ahead = next;
            }
            else{
                back = ahead;
                ahead = ahead->next;
            }
        }
        return dummy->next;
    }
};