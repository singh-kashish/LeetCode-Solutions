class Solution {
public:
    int solve(int l,int r,vector<int>&nums){
        if(l==r)return nums[r];
        if(l+1==r)return max(nums[l],nums[r]);
        return max( nums[l] + min( solve(l+1,r-1,nums) , solve(l+2,r,nums) ) , nums[r] + min( solve(l,r-2,nums) , solve(l+1,r-1,nums) ) );
    }
    bool PredictTheWinner(vector<int>& nums) {
        if(nums.size()<=1)return true;
        int sum = 0;
        for(auto x:nums)sum+=x;
        int s = solve(0,nums.size()-1,nums);
        return s>=sum-s;
    }
};