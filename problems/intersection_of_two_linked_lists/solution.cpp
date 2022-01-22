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
        ListNode * itr1 = headA, *itr2 = headB;
        if(headA==headB)return headA;
        if(headA and !headB)return NULL;
        if(!headA and headB)return NULL;
        int count1 = 1, count2 = 1;
        while(itr1->next){
            ++count1;
            itr1 = itr1->next;
        }
        while(itr2->next){
            ++count2;
            itr2 = itr2->next;
        }
        if(itr1!=itr2)return NULL;
        else {
            if(count1>=count2){
                itr1 = headA;
                itr2 = headB;
                for(int i=0;i<count1-count2;i++)itr1=itr1->next;
                while(itr1!=itr2){
                    itr1=itr1->next;
                    itr2=itr2->next;
                }
                return itr1;
            }
            else{
                itr1 = headA;
                itr2 = headB;
                for(int i=0;i<count2-count1;i++)itr2=itr2->next;
                while(itr1!=itr2){
                    itr1=itr1->next;
                    itr2=itr2->next;
                }
                return itr1;
                
            }
        }
    }
};