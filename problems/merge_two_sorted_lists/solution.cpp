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
        else if(!list1 and list2)return list2;
        else if(!list2 and list1)return list1;
        else{
             ListNode *t=list1,*p=list2,*head=NULL,*tail=NULL;
                while(t and p){
                    if(t->val <= p->val){
                        if(!head){
                            head = t;
                            tail = t;
                            t=t->next;
                        }
                        else{
                            tail->next=t;
                            t=t->next;
                            tail=tail->next;
                        }
                    }
                    else{
                    if(!head){
                        head = p;
                        tail = p;
                        p=p->next;
                    }
                    else{
                        tail->next = p;
                        tail=tail->next;
                        p=p->next;
                    }
                }
        }
        if(!t and !p)return head;
        else if(!p and t)tail->next = t;
        else if(!t and p)tail->next = p;
        return head;
        }
        
    }
};