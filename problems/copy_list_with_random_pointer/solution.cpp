/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return head;
        Node *curr = head;
        // add duplicate nodes after each node in original list
        for(auto curr = head;curr;curr=curr->next){
            Node *next=curr->next;
            curr->next = new Node(curr->val);
            curr->next->next=next;
            curr=curr->next;
        }
        // assign random pointer to the dummy nodes
        for(auto curr = head;curr;curr=curr->next){
            curr->next->random = curr->random!=NULL ? curr->random->next : NULL;
            curr=curr->next;
        }
        // extract this list 
        Node *head2 = head->next;
        Node *original = head,*copy = head2;
        while(copy and copy->next){
            original->next = copy->next;
            copy->next = copy->next->next;
            original=original->next;
            copy = copy->next;
        }
        original->next=NULL;
        return head2;
        
    }
};