class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string p =s;
        reverse(p.begin(),p.end());
        int n = s.length();
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1 ;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==p[j-1])dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
};