class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3)return -1;
        sort(nums.begin(),nums.end());
        int diff= INT_MAX;
        for(int i=0;i<nums.size();i++){
            int low = i+1,high=nums.size()-1;
            while(low<high){
                int s = nums[i] + nums[low] + nums[high];
                if(abs(target-s)<abs(diff))diff=target-s;
                if(s<target)low++;
                else high--;
            }
        }
        return target-diff;
    }
};