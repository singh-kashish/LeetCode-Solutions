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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        if(k==0)return head;
        ListNode *curr=head;
        int sum=0;
        while(curr!=NULL){
            sum++;
            curr=curr->next;
        }
        curr=head;
        if(k>sum)k=k%sum;
        k=sum-k;
        if(k==0 || k==sum)return head;
        int count=1;
        while(count<k and curr){
            count++;
            curr=curr->next;
        }
        if(!curr)return head;
        ListNode *kth=curr;
        while(curr->next){
            curr=curr->next;
        }
        curr->next=head;
        curr=kth->next;
        kth->next=NULL;
        return curr;
    }
};