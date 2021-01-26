class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left=0,right=nums.size()-1;
        if(left>right)return -1;
        if(right<=1){
            for(int i=0;i<=right;i++)if(target==nums[i])return i;
            return -1;
        }
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target)return mid;
            if(nums[left]==target)return left;
            if(nums[right]==target)return right;
            if(nums[mid]>nums[left]){
                if(nums[left]<=target && nums[mid]>target){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            else{
                
                if(nums[mid]<target && nums[right]>=target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
        }
        return -1;
    }
};