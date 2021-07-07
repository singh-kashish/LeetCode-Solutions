class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        else{
            if(nums[0]>nums[1])return 0;
            if(nums[n-1]>nums[n-2])return n-1;
            int low=0,high=n-1;
            while(low<=high){
                if(high==0 and nums[high]>nums[high+1])return 0;
                if(low==n-1 and nums[low]>nums[low-1])return low;
                int mid=low+(high-low)/2;
                if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])return mid;
                else if(nums[mid+1]>nums[mid])low=mid+1;
                else high=mid-1;
            }
            return -1;
        }
    }
};