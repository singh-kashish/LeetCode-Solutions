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
        if(!head || !head->next || k==0)return head;
        int n=1;
        ListNode* currentPtr=head;
        while(currentPtr->next){
            currentPtr=currentPtr->next;
            n++;
        }
        int rotationNeeded = k%n;
        if(rotationNeeded==0)return head;
        // New head at n-rotationNeeded-1 position from 0
        ListNode* tail=head;
        for(int i=0;i<n-rotationNeeded-1;i++){
            tail = tail->next;
        }
        ListNode * newHead = tail->next;
        tail->next = nullptr;
        currentPtr->next = head;
        return newHead;
    }
};