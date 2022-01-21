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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr = head , *prevFirst=head;
        bool firstPass = true;
        while(curr)
        {
            ListNode *temp=curr;
            for(int i=0;i<k;i++){
                if(temp==NULL){
                 prevFirst->next=curr;
                    return head;
                }
                temp=temp->next;
            }
            ListNode *next = NULL,*prev=NULL, * first = curr;
            for(int count=0;curr and count<k;count++){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            if(firstPass){
                firstPass=false;
                head = prev;
            }
            else{
                prevFirst->next = prev;
            }
            prevFirst = first;
        }
        return head;
        
    }
};