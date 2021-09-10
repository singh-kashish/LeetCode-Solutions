class Solution {
public:
     int search(vector<int>& nums, int target) {
        int n=nums.size();
       int left = 0 ,right = n-1;
         while(left<=right){
             int mid = left + (right - left)/2;
             if(nums[mid]==target)return mid;
             if(nums[mid]>=nums[left]){
                 if(target>=nums[left] and target <= nums[mid])right = mid-1;
                 else left=mid+1;
             }
             else {
                 if(target>=nums[mid] and target<=nums[right])left = mid+1;
                 else right= mid-1;
             }
         }
         return -1;
    }
};