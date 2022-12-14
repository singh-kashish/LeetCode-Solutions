class Solution {
public:
    vector<int>memo;
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        memo = vector<int>(n+1,-1);
        return solve(nums,n);
    }
    int solve(vector<int>&nums,int n){
        if(n>=0){
            if(memo[n]>=0){
                return memo[n];
            }
            else {
                int res = max(nums[n]+solve(nums,n-2),solve(nums,n-1));
                memo[n]=res;
                return memo[n];
            }
            
        }
        return 0;
    }
};