class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int dp[n][n];
        // BASE CASE : PICK THE MAX OF TWO PILES
        for( int i=0;i<n-1;i++){
            dp[i][i+1]=max(piles[i],piles[i+1]);
        }
        // Every time we pick a particular position , we must move to the next position by 2 steps 
        for(int gap = 3 ; gap < n ; gap+=2 ){
            for( int i=0 ; i + gap < n ; i++ ){
                int j = i + gap;
                // IF ALEX PICKS i'th element , he'll get the minimum of i+1'th and j'th since Lee will take the maximum of them , since he wants to win as well.
                // Same if we pick j'th element we are left with minimum of i'th and j-1'th
                dp[i][j] = max( piles[i] + min( dp[i+2][j] , dp[i+1][j-1] ) , piles[j] + min( dp[i][j-2] , dp[i+1][j-1] )) ;
            }
        }
        int sum = 0 ;
        for(auto x:piles)sum+=x;
        // If Alex's sum is greater than Lee's return true, else false;
        return dp[0][n-1]>sum-dp[0][n-1];
    }
};