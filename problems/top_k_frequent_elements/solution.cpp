
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Using Map and Sorting
        unordered_map<int,int> st;
        for(auto x: nums)st[x]++;
        // vector<pair<int,int>>f(st.begin(),st.end());
        // sort(f.begin(),f.end(),[](auto &a,auto &b){
        //     return a.second>b.second;
        // });
        // vector<int>ans;
        // for(int itr=0 ; itr<k ; itr++){
        //     ans.push_back(f[itr].first);
        // }
        // return ans;
        
        //Using Heap/priority_queue
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        for(auto &[num,count]:st){
            minHeap.push({count,num});
            if(minHeap.size()>k)minHeap.pop();
        }
        vector<int>result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
}};