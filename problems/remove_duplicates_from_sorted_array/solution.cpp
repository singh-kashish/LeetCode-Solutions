class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int res = 1, n = nums.size();
        if(n==0)return 0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[res-1]){
                nums[res]=nums[i];
                res++;
            }
            
        }
        return res;
    }
};