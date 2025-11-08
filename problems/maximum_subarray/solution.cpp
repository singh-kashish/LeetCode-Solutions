class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0, res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currSum=max(nums[i],currSum+nums[i]);
            res = max(res,currSum);
        }
        return res;
    }
};