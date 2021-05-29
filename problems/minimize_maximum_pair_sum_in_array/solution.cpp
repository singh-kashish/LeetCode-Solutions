class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int>maxi;
        priority_queue<int,vector<int>,greater<int>>mini;
        for(int i=0;i<n;i++){
            maxi.push(nums[i]);
            mini.push(nums[i]);
        }
        int res=0;
        for(int i=0;i<n/2;i++){
            int maxa=maxi.top();
            int mina=mini.top();
            res=max(res,maxa+mina);
            maxi.pop();
            mini.pop();
        }
        return res;
    }
};