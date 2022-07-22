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
        if(!headA or !headB)return NULL;
        int lengthA = 0, lengthB = 0;
        ListNode *temp = headA;
        while(temp){
            lengthA++;
            temp = temp->next;
        }
        temp = headB;
        while(temp){
            lengthB++;
            temp = temp->next;
        }
        ListNode * itrA = headA, *itrB = headB;
        if(lengthA<=lengthB){
            for(int i=0;i<lengthB-lengthA and itrB;i++)itrB=itrB->next;
        }
        else {
            for(int i=0;i<lengthA-lengthB and itrA;i++)itrA = itrA->next;
        }
        while(itrA and itrB and itrA!=itrB){
            itrA = itrA->next;
            itrB = itrB->next;
        }
        return itrA;
    }
};