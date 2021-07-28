class Node{
    public:
    int data;
    Node *next;
    public:
    Node(int n){
        data=n;
        next=NULL;
    }
};
class RecentCounter {
public:
    RecentCounter() {
                
    }
    Node *head=NULL;
    int ping(int t) {
        if(head==NULL){
            Node *curr = new Node(t);
            head = curr;
            return 1;
        }
        else{
            while(head and head->data<t-3000)head=head->next;
            if(head==NULL){
                Node *curr = new Node(t);
                head = curr;
                return 1;
            }
            Node *curr=head;
            
            int count=0;
            while(curr->next!=NULL){
                count++;
                curr=curr->next;
            }
            count++;
            curr->next = new Node(t);
            count++;
            return count;
        }
        }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */