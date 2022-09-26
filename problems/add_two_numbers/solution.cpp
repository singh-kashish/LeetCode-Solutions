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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL,*curr=res;
        if(!l1)return l2;
        if(!l2)return l1;
        int carry = 0,sum=0;
        while(l1 and l2){
            sum = l1->val + l2->val+carry;
            carry = sum/10;
            if(sum>=10)sum=sum%10;
            if(!res){
                res = new ListNode(sum);
                curr = res;
            }
            else{
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 and !l2){
            sum = l1->val +carry;
            carry = sum/10;
            if(sum>=10)sum=sum%10;
            if(!res){
                res = new ListNode(sum);
                curr = res;
            }
            else{
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l1=l1->next;
        }
        while(!l1 and l2){
            sum = l2->val+carry;
            carry = sum/10;
            if(sum>=10)sum=sum%10;
            if(!res){
                res = new ListNode(sum);
                curr = res;
            }
            else{
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l2 = l2->next;
        }
        while(carry>0){
            curr->next = new ListNode(carry%10);
            carry = carry/10;
            curr = curr->next;
        }
        return res;
    }
};