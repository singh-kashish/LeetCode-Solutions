class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 1;
        int pivot = 0;
        int right = 1;
        while(right<n){
            if(nums[pivot]==nums[right])right++;
            else{
                swap( nums[pivot+1] , nums[right]);
                pivot++;
                right++;
            }
        }
        return pivot+1;
    }
};