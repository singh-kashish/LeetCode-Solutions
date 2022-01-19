class Solution {
public:
    void reverse(vector<int>&nums,int start,int end){
        while(start<=end){
            swap(nums[start++],nums[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
            if(n==1)return;
            if(n<=k){
                k = k%n;
            }
        // reverse the first n-k elements
            reverse(nums,0,n-k-1);
        // reverse the second part 
            reverse(nums,n-k,n-1);
        // reverse the whole array
            reverse(nums,0,n-1);
    }
};