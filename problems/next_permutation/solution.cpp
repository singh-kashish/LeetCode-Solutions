class Solution {
public:
    void reverse(vector<int>&nums,int start){
        int end = nums.size()-1;
        while(start<end){
            swap(nums[start++],nums[end--]);
        }
        return;
    }
    void nextPermutation(vector<int>& nums) {
        int itr = nums.size()-1;
        while(itr>0 and nums[itr-1]>=nums[itr]){
            itr--;
            }
            if(itr>0){
                int j = nums.size()-1;
                while(nums[j]<=nums[itr-1])j--;
                swap(nums[j],nums[itr-1]);
                
            }
        reverse(nums,itr);
        
    }
};