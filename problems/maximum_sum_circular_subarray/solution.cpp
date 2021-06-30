class Solution {
public:
    int kadane(vector<int>&nums){
        int n=nums.size();
        int res=nums[0],currSum=nums[0];
        for(int i=1;i<n;i++){
            currSum = max(currSum+nums[i],nums[i]);
            res=max(res,currSum);
        }
        return res;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int maxSumUnchangedKadane= kadane(nums);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            nums[i]= -nums[i];
        }
        if(maxSumUnchangedKadane<0)return maxSumUnchangedKadane;
        int invertedKadaneMaxSum=kadane(nums);
        return max(sum+invertedKadaneMaxSum,maxSumUnchangedKadane);
    }
};