class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x:piles){
            pq.push(x);
        }
        while(k--){
            int maxHere = pq.top();
            pq.pop();
            maxHere = maxHere - floor(maxHere/2);
            pq.push(maxHere);
        }
        int res = 0;
        while(pq.empty()==false){
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};