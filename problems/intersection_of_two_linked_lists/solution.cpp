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
        ListNode *currA = headA,*currB=headB;
        int a = 0,b=0;
        while(currA){
            a++;
            currA=currA->next;
        }
        while(currB){
            b++;
            currB = currB->next;
        }
        currA = headA,currB = headB;
        if(a>b){
            for(int i=0;currA and i<a-b;i++){
                currA = currA->next;
            }
        }
        else if(b>a){
            for(int i=0;currB and i<b-a;i++){
                currB = currB->next;
            }
        }
        while(currA and currB){
            if(currA==currB)return currA;
            if(currA->next == currB->next)return currA->next;
            else {
                currA = currA->next;
                currB = currB->next;
            }
        }
        return NULL;
    }
};