/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
typedef ListNode Node;
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head or head->next==NULL)return NULL;
        Node *slow = head , *fast = head;
        while(slow and fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)break;
        }
        if(slow!=fast)return NULL;
        
        if(slow==head and fast==head)return head;
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->next;
        
    }
};