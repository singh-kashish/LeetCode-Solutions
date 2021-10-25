class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int curr=0, res=INT_MIN;
        for(int i=0;i<nums.size() ;i++){
            curr = max(curr+nums[i],nums[i]);
            res = max(res,curr);
        }
        return res;
    }
};