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
    ListNode *reverse(ListNode *head,ListNode *nextLineStart){
        ListNode *next,*prev=NULL,*curr=head;
        while(curr!=nextLineStart){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode *curr=head,*toReturnHead=NULL,*lastEnd;
        ListNode *temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(k==n)return reverse(head,NULL);
        else{
            while(curr){
                ListNode *nextLineStart=curr;
                bool toReverse=false;
                for(int i=0;i<k and nextLineStart;i++){
                    nextLineStart=nextLineStart->next;
                    if(i==k-1)toReverse=true;
                }
                if(!toReturnHead){
                    if(toReverse){
                        toReturnHead=reverse(curr,nextLineStart);
                        ListNode *p=head;
                        while(p->next){
                            p=p->next;
                        }
                        lastEnd=p;
                    }
                }
                else{
                    if(toReverse){
                        ListNode *nextHead=reverse(curr,nextLineStart);
                        lastEnd->next =nextHead;
                        ListNode *p=lastEnd->next;
                        while(p->next){
                            p=p->next;
                        }
                        lastEnd=p;
                    }
                    else{
                        lastEnd->next = curr;
                    }
              }
                curr=nextLineStart;
            }
            return toReturnHead;
            }    
        }
};