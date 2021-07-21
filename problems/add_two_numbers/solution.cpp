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
        if(l1==NULL)return l2;
        if(!l2)return l1;
        int sum = l1->val + l2->val;
        int carry = sum/10;
        if(sum>9)sum=sum%10;
        ListNode * head = new ListNode(sum);
        ListNode *tail=head;
        ListNode *curr1=l1->next,*curr2=l2->next;
        while(curr1 or curr2){
            int a = curr1?curr1->val:0;
            int b = curr2?curr2->val:0;
            sum = carry + a + b;
            carry = sum/10;
            if(sum>9)sum=sum%10;
            tail->next = new ListNode(sum);
            tail=tail->next;
            if(curr1)curr1=curr1->next;
            if(curr2)curr2=curr2->next;
            }
        if(carry!=0)tail->next=new ListNode(carry);
        return head;
    }
};