class Solution {
public:
    int rec(int n,vector<int>&cost){
        if(n==1) return min(cost[0]+cost[1],cost[1]);
        if(n==0)return cost[0];
        if(n==cost.size())return min(rec(n-1,cost),rec(n-2,cost));
        return cost[n]+min(rec(n-1,cost),rec(n-2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        //return rec(cost.size(),cost);
        int n=cost.size();
        if(n==1)return cost[0];
        if(n==2)return min(cost[0],cost[1]);
        int arr[n];
        arr[0]=cost[0];
        arr[1]=cost[1];
        for(int i=2;i<n;i++)arr[i]=cost[i]+min(arr[i-1],arr[i-2]);
        return min(arr[n-1],arr[n-2]);
    }
};