class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>dict;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(dict.find(target-nums[i])==dict.end())dict[nums[i]]=i;
            else {
                return {dict[target-nums[i]],i};
            }
        }
        return {-1,-1};
    }
};