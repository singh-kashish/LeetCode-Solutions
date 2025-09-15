class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>merged;
        sort(intervals.begin(),intervals.end());
        merged.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            auto interval = intervals[i];
            int n = merged.size();
            if(merged[n-1][1]>=intervals[i][0])merged[n-1][1]=max(interval[1],merged[n-1][1]);
            else merged.push_back(interval);
        }
        return merged;
    }
};