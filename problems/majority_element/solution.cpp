class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>dict;
        int n = nums.size();
        for(auto x:nums){
            dict[x]++;
            if(dict[x]>n/2)return x;
        }
        return -1;
    }
};