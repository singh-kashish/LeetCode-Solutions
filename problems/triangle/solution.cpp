class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<triangle[i].size();j++){
                int topLeft = (i-1>=0 and j-1>=0) ? dp[i-1][j-1] : INT_MAX;
                int top = (i-1>=0 and j>=0) ? dp[i-1][j] :INT_MAX;
                dp[i][j]=triangle[i][j]+min(topLeft,top);
            }
        }
        int res=INT_MAX;
        for(int j=0;j<triangle[n-1].size();j++){
            res=min(res,dp[n-1][j]);
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return res;
        return solve(0,0,triangle);
    }
    int solve(int i,int j,vector<vector<int>>&triangle){
        int n = triangle.size();
        if(i==n)return 0;
        else return min(triangle[i][j]+solve(i+1,j,triangle),triangle[i][j]+solve(i+1,j+1,triangle));
    }
};