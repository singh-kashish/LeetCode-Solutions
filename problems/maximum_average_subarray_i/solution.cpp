class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        // since avg is sum/k , so we can directly compare sum since k is fixed
        for(int i=0;i<k;i++)sum+=nums[i];
        int maximumSum = sum;
        for(int i=k;i<nums.size();i++){
            sum = sum+nums[i]-nums[i-k];
            maximumSum = max(sum,maximumSum);
        }
        
        return (double)maximumSum/k;
    }
};