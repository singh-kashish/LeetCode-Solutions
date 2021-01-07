class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0,n=accounts.size();
        int s=accounts[0].size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<s;j++){
                sum+=accounts[i][j];
            }
            res=max(sum,res);
        }
        return res;
    }
};