class Solution {
public:
    bool canPartition(vector<int>& nums) {
        long long int sum=0;
        for(auto x:nums)sum+=x;
        if(sum & 1)return false;
        
            int n=nums.size();
            sum/=2;
            bool dp[n+1][sum+1];
            for(int i=0;i<=n;i++)dp[i][0]=1;
            for(int j=1;j<=sum;j++)dp[0][j]=0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=sum;j++){
                    if(j<nums[i-1])dp[i][j]=dp[i-1][j];
                    else{
                        dp[i][j]=dp[i-1][j] or dp[i-1][j-nums[i-1]];
                    }
                }
            
        }
        return dp[n][sum];
    }
};