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
    ListNode * middle(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode * reverse(ListNode *head){
        if(!head)return head;
        ListNode *prev=NULL,*curr=head,*next=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *mid=middle(head);
        ListNode *head2=reverse(mid);
        ListNode *t=head,*p=head2;
        while(t && p){
            if(t->val==p->val){
                t=t->next;
                p=p->next;
            }
            else return false;
        }
        return true;
        
    }
};