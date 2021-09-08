class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(m==0 or n==0)return 0;
        else if(m==1 and n==1)return (obstacleGrid[0][0]==1?0:1);
        else if(m==1){
            for(int i=0;i<n;i++)if(obstacleGrid[0][i]==1)return 0;
            return 1;
        }
        else if(n==1){
            for(int i=0;i<m;i++)if(obstacleGrid[i][0]==1)return 0;
            return 1;
        }else{
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        bool issue = false;
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0]==0 and issue==false)dp[i][0]=1;
            else {
                issue = true;
                dp[i][0]=-1;
            }}
        issue = false;
        for(int j=1;j<n;j++){
            if(obstacleGrid[0][j]==0 and issue==false)dp[0][j]=1;
            else {
                issue = true;
                dp[0][j]=-1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1)dp[i][j]=-1;
                else dp[i][j] = (dp[i-1][j]==-1?0:dp[i-1][j]) + (dp[i][j-1]==-1 ? 0 : dp[i][j-1]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        if(dp[m-1][n-1]==-1)return 0;
        else return dp[m-1][n-1];
    }}
};