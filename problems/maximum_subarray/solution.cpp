class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int  currSum = nums[0],maxSum = nums[0];
        for(int itr = 1;itr<n;itr++){
            currSum = max(currSum+nums[itr],nums[itr]);
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};