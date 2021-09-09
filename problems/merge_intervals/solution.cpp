class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0)return {};
        if(intervals.size()==1)return intervals;
        
        list<vector<int>>ll;
        sort(intervals.begin(),intervals.end());
        for(auto x:intervals){
            if(ll.empty() or ll.back()[1]<x[0])ll.push_back(x);
            else ll.back()[1]=max(ll.back()[1],x[1]);
        }
        vector<vector<int>>result;
        for(auto x:ll)result.push_back(x);
        return result;
    }
};