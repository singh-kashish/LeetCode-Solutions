class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        // finding the lcs
        int n = str1.length() , m = str2.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if( str1[i-1] == str2[j-1] ){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        string lcs;// longest common subsequence
        int i = n , j = m;
        while(i>0 and j>0){
            if( str1[i-1] == str2[j-1] ) {
                lcs+=str1[i-1];
                i--;
                j--;
                }
            else{
                if(dp[i-1][j] > dp[i][j-1])i--;
                else j--;
            }   
        }
        reverse(lcs.begin(),lcs.end());
        i=0,j=0;
        string ans;
        for(auto x:lcs){
            while( str1[i]!=x ){
                ans+=str1[i];
                i++;
            }
            while( str2[j]!=x ){
                ans+=str2[j];
                j++;
            }
            ans+=x;
            i++;
            j++;
        }
        ans+=str1.substr(i)+str2.substr(j);
        return ans;
    }
};