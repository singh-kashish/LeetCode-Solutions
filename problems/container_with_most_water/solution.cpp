class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        if(n==0 || n==1)return 0;
        int left = 0, right = n-1, maxVol=0;
        while(left<right){
            int areaHere = (right-left)*min(height[left],height[right]);
            maxVol = max(maxVol,areaHere);
            if(height[left]<height[right])left++;
            else right--;
        }
        return maxVol;
    }
};