class Solution {
public:
    int minDistance(string word1, string word2) {
        // use lcs to find length of longest commmon subsequence
        int n = word1.length() , m = word2.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if( word1[i-1] == word2[j-1] ){
                    dp[i][j]  = 1 + dp[i-1][j-1];
                }
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]); 
            }
        }
        int ans = dp[n][m];
        return n-ans + m-ans;
    }
};