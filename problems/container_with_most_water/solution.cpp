class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int result = 0;
        int left = 0 ,right = n-1;
        while(left<right){
            int currSmall = min(height[right],height[left]);
            result = max(result , currSmall*(right-left));
            if(currSmall==height[right])right--;
            else left++;
        }
        return result;
    }
};