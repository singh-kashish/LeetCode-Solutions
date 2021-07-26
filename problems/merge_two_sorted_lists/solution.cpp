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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 and !l2)return NULL;
        if(!l1)return l2;
        if(!l2)return l1;
        ListNode *firstList = l1,*secondList =l2;
        ListNode *head = NULL, *tail = NULL;
        while(firstList and secondList){
            if(firstList->val>=secondList->val){
                if(!head){
                    head = secondList;
                    tail= secondList;
                    secondList =secondList->next;
                }
                else {
                    tail->next = secondList;
                    secondList = secondList->next;
                    tail = tail->next;
                }
            }
            else {
                if(!head){
                    head = firstList;
                    tail=firstList;
                    firstList = firstList->next;
                }
                else {
                    tail->next=firstList;
                    firstList = firstList->next;
                    tail=tail->next;
                }
            }
        }
        if(firstList)tail->next=firstList;
        if(secondList)tail->next = secondList;
        return head;
    }
};