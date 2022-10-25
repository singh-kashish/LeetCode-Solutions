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
    ListNode *rotate(ListNode*head){
        if(head->next==NULL)return head;
        ListNode*start=head,*end=head;
        while(end->next->next){
            end=end->next;
        }
        ListNode *last=end->next;
        end->next=NULL;
        last->next=start;
        head=last;
        return head;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or head->next==NULL)return head;
        ListNode *tempHead=head;
        int n=0;
        while(tempHead){
            n++;
            tempHead=tempHead->next;
        }
        tempHead=head;
        if(k>n){
            k=k%n;
        }
        for(int i=0;i<k;i++){
            tempHead=rotate(head);
            head=tempHead;
        }
        return head;
    }
};