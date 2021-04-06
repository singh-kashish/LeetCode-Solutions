class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>sums(n);
        sums[0]=nums[0];
        for(int i=1;i<n;i++){
            sums[i]=max(nums[i],sums[i-1]+nums[i]);
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++){
            res=max(sums[i],res);
        }
        return res;
    }
};