class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,unordered_set<int>>dict;
        for(int i=0;i<nums.size();i++){
            if(dict.find(nums[i])==dict.end()){
                dict[nums[i]].insert(i);
            }
            else{
                for(auto x:dict[nums[i]]){
                    if(k>=abs(i-x))return true;
                    else dict[nums[i]].insert(i);
                }
            }
        }
        return false;
    }
};