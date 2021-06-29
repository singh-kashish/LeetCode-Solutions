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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL)return head;
        ListNode *curr=head;
        int i=1;
        while(i!=k){
            i++;
            curr=curr->next;
        }
        ListNode *start=head,*end=curr;
        while(curr->next!=NULL){
            curr=curr->next;
            start=start->next;
        }
        swap(end->val,start->val);
        return head;
    }
};