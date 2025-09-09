class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size(); 
        // Use Min Heap
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(auto x : nums){
            minHeap.push(x);
            while(minHeap.size()>k){
                minHeap.pop();
            }
        }
        while(minHeap.size()>k){
            minHeap.pop();
        }
        return minHeap.top();
    }
};