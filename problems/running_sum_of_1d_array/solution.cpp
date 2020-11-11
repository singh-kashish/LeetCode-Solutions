class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>running(nums.size(),0);
        running[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            running[i]=running[i-1]+nums[i];
        }
        return running;
    }
};