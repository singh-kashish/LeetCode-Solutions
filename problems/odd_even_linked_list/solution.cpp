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
       if(!head or !(head->next))return head;
        ListNode *headOdd=head,*headEven=head->next;
        ListNode *currOdd=headOdd,*currEven= headEven;
        while(currEven and currEven->next){
            if(currOdd->next){
                currOdd->next=currOdd->next->next;
                currOdd=currOdd->next;
            }
            if(currEven->next){
                currEven->next = currEven->next->next;
                currEven = currEven ->next;
            }
        }
        currOdd->next=headEven;
        return headOdd;
        
        
    }
};