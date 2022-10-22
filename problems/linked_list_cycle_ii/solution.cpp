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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode *>dict;
        ListNode *itr=head;
        if(!itr)return itr;
        else {
            while(itr){
                if(dict.find(itr)!=dict.end())return itr;
                else{
                    dict.insert(itr);
                    itr=itr->next;
                }
            }
            return itr;
        }}
};