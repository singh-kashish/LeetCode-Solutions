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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return NULL;
        ListNode *curr=head,*next=head->next;
        while(next){
            if(curr->val==next->val){
                curr->next=next->next;
                ListNode *temp=next;
                next=next->next;
                delete(temp);
            }
            else{
                curr=curr->next;
                next=next->next;
            }
        }
        return head;
    }
};