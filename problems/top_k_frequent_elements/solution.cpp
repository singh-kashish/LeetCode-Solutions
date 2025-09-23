
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto &[num,count]:m){
            pq.push({count,num});
            while(pq.size()>k)pq.pop();
        }
        vector<int>res;
        while(pq.size()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
}};