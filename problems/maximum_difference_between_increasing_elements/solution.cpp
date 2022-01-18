class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = INT_MIN,n=nums.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            if(pq.empty()==false and pq.top()<nums[i]){
               
                res = max(res,nums[i]-pq.top());
            }
             
            pq.push(nums[i]);
        }
        return res==INT_MIN ? -1 : res;
    }
};