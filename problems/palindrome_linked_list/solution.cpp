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
    ListNode *reverse(ListNode * head){
        ListNode * next =NULL,*prev=NULL,*curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head->next)return true;
        ListNode * mid = head, *fast =head;
        while(fast and fast->next){
            fast=fast->next->next;
            mid = mid->next;
        }
        ListNode * itr2 = reverse(mid);
        while(head and itr2){
            if(head->val != itr2->val)return false;
            else{
                head = head->next;
                itr2 = itr2->next;
            }
        }
        return true;
    }
};