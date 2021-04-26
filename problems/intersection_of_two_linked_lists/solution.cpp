/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode *curr=headA;
            while(curr){
                a++;
                curr=curr->next;
            }
        curr=headB;
        while(curr){
            b++;
            curr=curr->next;
        }
        if(a>b){
            curr=headA;
            for(int i=0;i<abs(a-b);i++)curr=curr->next;
            ListNode *p=headB;
            while(p and curr){
                if(p==curr)return p;
                
                p=p->next;
                curr=curr->next;
            }
            return NULL;
        }
        else{
            curr=headA;
            ListNode *p=headB;
            for(int i=0;i<abs(a-b);i++)p=p->next;
            while(p and curr){
                if(p==curr)return p;
                p=p->next;
                curr=curr->next;
            }
            return NULL;
        }
    }
};