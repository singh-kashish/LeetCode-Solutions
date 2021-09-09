class Solution {
public:
    void reverse(vector<int>&nums,int left){
        int right = nums.size() -1;
        while(left<right){
                swap(nums[left++],nums[right--]);
            }
        return;
    }
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-1;
        while(i>0 and nums[i-1]>=nums[i])i--;
        if(i>0){
            int j = nums.size()-1;
            while(nums[j]<=nums[i-1])j--;
            swap(nums[i-1],nums[j]);
        }
        reverse(nums,i);
    }
};