class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==0)return 0;
        if(n==1)return stones[0];
        priority_queue<int>pq;
        
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        
        while(pq.size()>1){
            int greater = pq.top();
            pq.pop();
            int smaller = pq.top();
            pq.pop();
            // cout<<greater<<" "<<smaller<<endl;
            if(greater==smaller)continue;
            else {
                pq.push(greater-smaller);
            }
        }
        if(pq.size()==0)return 0;
        else return pq.top();
    }
};