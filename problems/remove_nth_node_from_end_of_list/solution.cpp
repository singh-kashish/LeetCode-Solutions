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
        if(head->next==NULL and n==1)return NULL;
       ListNode *toBeDeleted=head;
        for(int i=0;i<n;i++)toBeDeleted=toBeDeleted->next;
        ListNode *actualNextDeleted=head;
        while(toBeDeleted and toBeDeleted->next){
            actualNextDeleted=actualNextDeleted->next;
            toBeDeleted=toBeDeleted->next;
        }
        if(toBeDeleted==NULL)return head->next;
        toBeDeleted=actualNextDeleted->next;
        actualNextDeleted->next=toBeDeleted->next;
        delete(toBeDeleted);
        return head;
        
    }
};