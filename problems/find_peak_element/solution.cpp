class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 , high = nums.size();
        int n = nums.size();
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
            if(nums[n-1]>nums[n-2])return n-1;
        while(low<=high){
            int mid = low + (high - low )/2;
            if((mid==0 or nums[mid-1]<nums[mid]) and (mid==n-1 or nums[mid+1]<nums[mid]))return mid;
            else if( mid>0 and nums[mid-1]>=nums[mid])high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};