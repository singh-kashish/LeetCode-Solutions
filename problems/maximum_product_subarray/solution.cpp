class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int>prod(n);
        prod[0]=nums[0];
        int maxEnding = nums[0], minEnding = nums[0], res= nums[0];
        for(int i=1;i<n;i++){
            int x = nums[i];
            if(x<0)swap(maxEnding,minEnding);
            maxEnding = max(x, x*maxEnding);
            minEnding = min(x, x*minEnding);
            res = max(res,maxEnding);
        }
        return res;
    }
};