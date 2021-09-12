class Solution {
public:
    int solve(int s1,vector<int>&nums){
        if(s1<0)s1=-s1;
        int n =nums.size();
        int dp[n+1][s1+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=n;i++)dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(j<nums[i-1])dp[i][j]=dp[i-1][j];
                else dp[i][j] = dp[i-1][j] + (j-nums[i-1]>=0 ? dp[i-1][j-nums[i-1]] : 0);
            }
        }
        return dp[n][s1];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
       
        for(auto x:nums){
            sum+=x;
        }
       if(sum<target)return 0;
        return (target+sum)%2 == 0 ? solve((target+sum)/2,nums): 0;
        
    }
};