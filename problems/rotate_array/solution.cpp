class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0 || n==1)return;
        int actualRotations = k%n;
        if(actualRotations==0)return;
        reverse(nums,0,n-1);
        reverse(nums,0,actualRotations-1);
        reverse(nums,actualRotations,n-1);
        return;
    }
    void reverse(vector<int>&nums,int startIndex,int endIndex){
        int n = nums.size();
        if(startIndex<0 || endIndex<0 || startIndex>=n || endIndex>=n)return;
        while(startIndex<endIndex){
            int temp = nums[startIndex];
            nums[startIndex]=nums[endIndex];
            nums[endIndex]=temp;
            startIndex++;
            endIndex--;
        }
        return;
    }
};