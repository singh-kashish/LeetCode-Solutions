class Solution {
public:
    bool feasible(int currLeast,int days,vector<int>&weights){
        int daysTaken = 1,currLoadOnPlatform=0;
        for(auto x:weights){
            currLoadOnPlatform+=x;
            if(currLoadOnPlatform>currLeast){
                daysTaken++;
                currLoadOnPlatform=x;
            }
        }
        return daysTaken<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWt=0,totalWt=0;
        for(auto x:weights){
            maxWt=max(maxWt,x);
            totalWt+=x;
        }
        int l=maxWt,r=totalWt;
        while(l<r){
            int mid = (l+r)/2;
            if(feasible(mid,days,weights)){
                r=mid;
            } else {
                l = mid+1;
            }
        }
        return l;
    }
};