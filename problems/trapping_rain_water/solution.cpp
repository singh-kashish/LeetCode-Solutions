class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0 or n==1 or n==2)return 0;
        vector<int>lMax(n,0);
        lMax[0]=height[0];
        for(int i=1;i<n;i++){
            lMax[i]=max(lMax[i-1],height[i]);
        }
        vector<int>rMax(n,0);
        rMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rMax[i]=max(rMax[i+1],height[i]);
        }
        int res=0;
        for(int i=1;i<n;i++){
            res+= min(lMax[i],rMax[i])-height[i];
        }
        return res;
    }
};