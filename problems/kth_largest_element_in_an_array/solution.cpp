class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // Use minHeap in CPP
        priority_queue<int,vector<int>,greater<int>>mH;
        for(int i=0;i<n;i++){
            mH.push(nums[i]);
            while(mH.size()>k)mH.pop();
        }
        return mH.top();
    }
};