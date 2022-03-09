class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        if(n==0)return 0;
        string c=s;
        reverse(c.begin(),c.end());
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1 ; i<=n ;i++){
            for(int j=1; j<=n ;j++){
                if( s[i-1]==c[j-1] )dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max( dp[i-1][j] , dp[i][j-1] );
            }
        }
        return n-dp[n][n];
    }
};