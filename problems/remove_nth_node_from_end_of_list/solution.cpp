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
        if(!head)return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *itr = dummy;
        for(int i=0;i<n and itr;i++)itr=itr->next;
        
            auto toDeleteFrom = dummy;
            while(itr and itr->next){
                itr = itr->next;
                toDeleteFrom = toDeleteFrom->next;
            }
            if(toDeleteFrom->next)toDeleteFrom->next = toDeleteFrom->next->next;
            return dummy->next;
   
    }
};