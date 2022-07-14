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
    ListNode *merge(ListNode *itr1,ListNode*itr2){
        if(!itr1 and !itr2)return itr1;
        if(!itr1 and itr2)return itr2;
        if(itr1 and !itr2)return itr1;
        ListNode *head = NULL, *tail=NULL,*x=itr1,*y = itr2;
        while(x and y){
            int xVal = x->val, yVal = y->val;
            if(xVal<=yVal){
                ListNode * next = x->next;
                if(!head)head = x;
                if(!tail)tail = x;
                else{
                    tail->next = x;
                    tail = tail->next;
                x = next;
                    }
                }
            else{
                ListNode * next = y->next;
                if(!head)head = y;
                if(!tail)tail = y;
                else{
                    tail->next = y;
                    tail = tail->next;
                }
                y = next;
            }
        }
        if(!x)tail->next = y;
        if(!y)tail->next = x;
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto x:lists){
            if(x){
                auto temp = x;
                while(temp){
                    pq.push(temp->val);
                    temp = temp->next;
                }
            }
        }
        ListNode * head = NULL,*tail = NULL;
        while(!pq.empty()){
            int top = pq.top();
            if(!head)head = new ListNode(top);
            if(!tail)tail=head;
            else{
                tail->next = new ListNode(top);
                tail = tail->next;
            }
            pq.pop();
        }
        return head;
    }
};