class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane ka kadane
        int currSubArrayMaximumSum = nums[0] , finalSubArrayMaximumSum = nums[0];
        for(int iterator = 1 ; iterator < nums.size() ; iterator ++){
            currSubArrayMaximumSum = max( currSubArrayMaximumSum + nums[iterator] , nums[iterator]);
            finalSubArrayMaximumSum = max( finalSubArrayMaximumSum , currSubArrayMaximumSum);
        }
        return finalSubArrayMaximumSum;
    }
};