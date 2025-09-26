class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(auto x:words)m[x]++;
        struct Item{
            string word;
            int count;
        };
        auto cmp = [](const Item &a, const Item&b){
            if(a.count!=b.count)return a.count>b.count;
            return a.word<b.word;
        };
        priority_queue<Item,vector<Item>,decltype(cmp)>pq(cmp);
        for(auto &[count,word]: m){
            pq.push(Item{count,word});
            if((int) pq.size()>k)pq.pop();
        };
        vector<Item>items;
        items.reserve(pq.size());
        while(!pq.empty()){
            items.push_back(pq.top());
            pq.pop();
        };
        sort(items.begin(),items.end(),[](const Item &a, const Item &b){
            if(a.count!=b.count)return a.count>b.count;
            return a.word<b.word;
        });
        vector<string>res;
        res.reserve(items.size());
        for(const auto& it: items){
            res.push_back(it.word);
        }
        return res;
        
    }
};