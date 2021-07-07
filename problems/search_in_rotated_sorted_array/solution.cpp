class Solution {
public:
     int search(vector<int>& nums, int target) {
        int n=nums.size();
       int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)return mid;
            //check if left half is sorted in ascending order
            if(nums[low]<=nums[mid]){
                //check if target is in left half ka range
                if(nums[low]<=target and target<=nums[mid])high=mid-1;
                else low=mid+1;
            }
            else {
                //check if target is in right half ka range
                if(target<=nums[high] and nums[mid]<=target)low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
};