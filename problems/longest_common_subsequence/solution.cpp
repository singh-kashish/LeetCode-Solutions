class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
            int n1 = text1.length() , n2 = text2.length();
            
            // create dp table
            int dp[n1+1][n2+1];
            memset(dp,0,sizeof(dp));
            
            //fill from 1,1
            for(int i=1;i<=n1;i++){
                for(int j=1;j<=n2;j++){
                    if(text1[i-1]==text2[j-1])dp[i][j]=dp[i-1][j-1]+1;
                    else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    
                }
            }
            return dp[n1][n2];
    }
    };