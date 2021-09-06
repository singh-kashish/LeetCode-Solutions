class Solution {
public:
    string reverse(string s){
        string p;
        for(int i=s.length()-1;i>=0;i--)p+=s[i];
        return p;
    }
    int longestPalindromeSubseq(string s) {
        string rev = reverse(s);
        int n = s.length();
        
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==rev[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n]; 
    }
};