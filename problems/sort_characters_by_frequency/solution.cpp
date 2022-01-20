class Solution {
public:
     static bool comp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>dict;
        for(auto x:s)dict[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto x:dict){
            pq.push({x.second,x.first});
        }
        string result;
        while(pq.empty()==false){
            auto temp = pq.top();
            for(int i=0;i<temp.first;i++)result+=temp.second;
            pq.pop();
        }
        return result;
        
    }
};