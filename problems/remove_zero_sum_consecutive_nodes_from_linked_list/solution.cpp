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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*>prefixSum; // to store data from the ll
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode * temp = head,*prev = dummy;
        prefixSum[0] = dummy;
        int sum =0;
        while(temp){
            int data = temp->val;
            sum+=data;
            if(prefixSum.find(sum)!=prefixSum.end()){
                ListNode * toDeleteFrom = prefixSum[sum];
                ListNode * itr = toDeleteFrom->next;
                int tempValueHolder = sum;
                while(itr!=temp){
                    prefixSum.erase(itr->val+tempValueHolder);
                    tempValueHolder+=itr->val;
                    itr=itr->next;
                }
                toDeleteFrom->next = temp->next;
            }
            else{
               prefixSum[sum] = temp; 
            }
            temp = temp->next;
        }
        return dummy->next;
        
    }
};