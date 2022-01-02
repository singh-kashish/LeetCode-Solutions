class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0)return false;
        unordered_set<int>s;
        for(auto x:nums)s.insert(x);
        if(s.size()==nums.size())return false;
        else return true;
    }
};