class Solution {
public:
    static bool myComp(vector<int>a,vector<int>b){
        return (a[1]-a[0]<b[1]-b[0]);
    }
    int twoCitySchedCost(vector<vector<int>>& cost) {
        sort(cost.begin(),cost.end(),myComp);
        int res=0,n=cost.size();
        for(int i=0;i<n/2;i++){
            res+= cost[i][1] + cost[i+n/2][0]; 
        }
        return res;
    }
};