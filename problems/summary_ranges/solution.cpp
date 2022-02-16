class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<vector<int>>result;
        int start = 0;
        int n = nums.size();
        if(n==1)return {to_string(nums[0])};
        while(start<n){
            int end=start;
            while(end+1<n and nums[end]+1==nums[end+1])end++;
            result.push_back({nums[start],nums[end]});
            start=end+1;
        }
        vector<string>res;
        for(auto x:result){
            if(x[0]==x[1])res.push_back(to_string(x[0]));
            else res.push_back( to_string(x[0])+"->"+to_string(x[1]) );
        }
        return res;
    }
};