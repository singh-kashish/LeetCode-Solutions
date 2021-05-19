class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>result;
        deque<int>dq;
        //for first k elements
        for(int i=0;i<k;i++){
            while(!dq.empty() and nums[dq.back()]<=nums[i])dq.pop_back();
            dq.push_back(i);
        }
        result.push_back(nums[dq.front()]);
        //next items
        for(int i=k;i<nums.size();i++){
            while(!dq.empty() and dq.front()<=i-k)dq.pop_front();
            while(!dq.empty() and nums[dq.back()]<=nums[i])dq.pop_back();
            dq.push_back(i);
            result.push_back(nums[dq.front()]);
        }
        return result;
        
    }
};