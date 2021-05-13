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
    ListNode* oddEvenList(ListNode* head) {
       if(!head || !(head->next) || !(head->next->next) )return head;
        ListNode *odd=head,*even=head->next;
        ListNode *h=even;
        while(even and even->next){
            odd->next=even->next;
         
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        
        odd->next=h;
        return head;
    }
};