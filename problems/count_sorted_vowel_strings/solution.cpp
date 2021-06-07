class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][6];
        for(int i=0;i<6;i++)dp[0][i]=0;
        for(int i=0;i<n+1;i++)dp[i][0]=0;
        for(int i=1;i<6;i++)dp[1][i]=i;
        for(int i=1;i<n+1;i++)dp[i][1]=1;
        for(int i=2;i<n+1;i++){
            for(int j=2;j<6;j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
        return dp[n][5];
    }
};