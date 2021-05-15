class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0 or n==1 or n==2)return 0;
        int leftmax[n],rightmax[n];
        leftmax[0]=height[0];
        //fill left max
        for(int i=1;i<n;i++){
            leftmax[i]=max(height[i],leftmax[i-1]);
        }
        //fill right max
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i]);
        }
        int res=0;
        for(int i=1;i<n-1;i++){
            res+=min(rightmax[i],leftmax[i])-height[i];
        }
        return res;
        
    }
};