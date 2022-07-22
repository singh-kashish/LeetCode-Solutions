class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // i'd use a dict with sliding window to check if the value at right of window is present in the current window
        if(nums.size()==0 or nums.size()==1)return false;
        unordered_set<int>dict;
        if(k>=nums.size()){
            for(int i=0;i<nums.size();i++){
                if(dict.find(nums[i])!=dict.end())return true;
                dict.insert(nums[i]);    
            }
            return false;
        }
        for(int i=0;i<=k;i++){
            if(dict.find(nums[i])!=dict.end())return true;
            dict.insert(nums[i]);
        }
        for(int i=k+1;i<nums.size();i++){
            dict.erase(nums[i-k-1]);
            if(dict.find(nums[i])!=dict.end())return true;
            dict.insert(nums[i]);
        }
        return false;
    }
};