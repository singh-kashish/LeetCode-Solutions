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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left==right)return head;
        ListNode *curr = head, *prev = nullptr;
        while(left>1){
            prev = curr;
            curr = curr->next;
            left--;
            right--;
        }
        ListNode *connection = prev;
        ListNode * tail = curr, *next;
        while(right>0){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            right--;
        }
        if(connection!=nullptr){
            connection->next = prev;
        } else head = prev;
        tail->next = curr;
        return head;
    }
};