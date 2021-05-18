class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int low=0,high=nums.size()-1;
        int first=-1,second=-1;
        //for first
        while(low<=high){
            int mid=low + (high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        //for last
        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low + (high-low)/2;
            if(nums[mid]==target){
                second=mid;
                low=mid+1;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return {first,second};
    }
};