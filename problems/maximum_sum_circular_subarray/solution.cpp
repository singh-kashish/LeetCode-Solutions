class Solution {
public:
    int kadane(vector<int>&nums){
        int n = nums.size();
        int currSum = nums[0] , res = nums[0];
        for(int i=1;i<n;i++){
            currSum = max(currSum+nums[i],nums[i]);
            res = max(res,currSum);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int normalSum = kadane(nums);
        if(normalSum<0)return normalSum;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i]=-nums[i];
        }
        int ajeebSum = kadane(nums);
        
        return max(normalSum, sum+ajeebSum);
        
    }
};