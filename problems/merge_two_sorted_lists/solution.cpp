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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 and !list2)return list1;
        if(!list1 and list2)return list2;
        if(list1 and !list2)return list1;
        ListNode* itr1 = list1, *itr2 = list2,*head = NULL,*tail=NULL;
        while(itr1 and itr2){
            // always store smaller elements on list1;
            int data1 = itr1->val , data2 = itr2->val;
            if(data1<=data2){
                auto next = itr1->next;
                if(!head)head=itr1;
                if(!tail)tail=itr1;
                else {
                    tail->next = itr1;
                    tail = tail->next;
                }
                itr1 = next;
            }
            else{
                auto next = itr2->next;
                if(!head)head=itr2;
                if(!tail)tail=itr2;
                else{
                    tail->next = itr2;
                    tail = tail->next;
                }
                itr2=next;
            }
        }
        if(!itr1)tail->next = itr2;
        if(!itr2)tail->next = itr1;
        return head;
    }
};