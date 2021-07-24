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
        // if(!head)return head;
        // int totalNodes=0;
        // ListNode *t=head;
        // while(t){
        //     t=t->next;
        //     totalNodes++;
        // }
        // int currentIterate=0;
        // ListNode *curr=head,*prevFirst=NULL;
        // bool isFirstPass = true;
        // while(currentIterate+k<=totalNodes and curr){
        //     ListNode *prev=NULL,*first= curr;
        //     int count=0;
        //     while(curr and count<k){
        //         ListNode *next=curr->next;
        //         curr->next=prev;
        //         prev=curr;
        //         curr=next;
        //         count++;
        //     }
        //     currentIterate+=k;
        //     if(isFirstPass){
        //         head = prev;
        //         isFirstPass=false;
        //     }
        //     else prevFirst->next=prev;
        //     prevFirst = prev;
        // }
        // if(curr)prevFirst->next=curr;
        // return head;
        ListNode *curr=head,*prevFirst=NULL;
        bool firstPass=true;
        while(curr){
            ListNode *first=curr,*prev=NULL;
            int count=0;
            ListNode *temp=curr;
            for(int i=0;i<k;i++){
                if(temp==NULL){
                 prevFirst->next=curr;
                    return head;
                }
                temp=temp->next;
            }
            
            while(curr and count<k){
                auto *next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
            if(firstPass==true){
                head=prev;
                firstPass=false;
            }
            else{
                prevFirst->next=prev;
              
            }
              prevFirst=first;
        }
        return head;
      
        
    }
};