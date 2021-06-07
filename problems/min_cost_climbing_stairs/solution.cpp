class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==1)return cost[0];
        else if(n==2)return min(cost[0],cost[1]);
        else{
            int minCost[n];
            minCost[n-1]=cost[n-1];
            minCost[n-2]=cost[n-2];
            for(int i=n-3;i>=0;i--){
                minCost[i]=cost[i]+min(minCost[i+1],minCost[i+2]);
            }
            return min(minCost[0],minCost[1]);
        }
    }
};