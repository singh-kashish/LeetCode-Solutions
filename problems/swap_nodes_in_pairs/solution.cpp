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
        if(!head)return NULL;
        if(head->next==NULL)return head;
        ListNode *a=head,*b=head->next;
        ListNode *dummy = new ListNode(0);
        dummy->next = a;
        head = b;
        while(a->next and b){
            a->next = b->next;
            b->next = a;
            dummy->next = b;
            dummy = a;
            if(dummy==NULL)return head;
            a=dummy->next;
            if(a==NULL)return head;
            b=a->next;
        }
        return head;
    }
};