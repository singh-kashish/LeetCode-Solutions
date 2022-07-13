/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // copy the data from the next node to the given node and then make next of given to be next->next
        node->val = node->next->val;
        node->next = node->next->next;
    }
};