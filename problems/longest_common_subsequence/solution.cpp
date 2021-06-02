class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text2.length(),m=text1.length();
        int table[m+1][n+1];
        for(int i=0;i<=m;i++)table[i][0]=0;
        for(int j=0;j<=n;j++)table[0][j]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1])table[i][j]=1+table[i-1][j-1];
                else{
                    table[i][j]=max(table[i-1][j],table[i][j-1]);
                }
            }
        }
        return table[m][n];
    }
};