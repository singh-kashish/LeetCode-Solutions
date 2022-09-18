class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>r;
        int n = nums.size();
        unordered_map<int,int>dict;
        unordered_set<int>res;
        for(auto x:nums){
            dict[x]++;
            if(dict[x]>n/3){
                res.insert(x);
            }
        }
        
        for(auto x:res)r.push_back(x);
        return r;
    }
};