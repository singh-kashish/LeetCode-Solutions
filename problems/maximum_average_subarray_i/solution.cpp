class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum=0;
        for(int i=0;i<k;i++)windowSum+=nums[i];
        int maxSum = windowSum;
        int windowEnd = k, windowStart=0;
        while(windowEnd<nums.size()){
            windowSum = nums[windowEnd]-nums[windowStart]+windowSum;
            windowEnd++;
            windowStart++;
            maxSum = max(windowSum,maxSum);
        }
        return (double)maxSum/k;
    }
};