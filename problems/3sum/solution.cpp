class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>res;
        if(n<3)return res;
        sort(nums.begin(),nums.end());
        for(int itr=0 ; itr<n; itr++){
            // Skip duplicates
            if(itr>0 && nums[itr]==nums[itr-1])continue;
            int leftPtr=itr+1 , rightPtr = n-1;
            while(leftPtr<rightPtr){
                int sum = nums[itr]+nums[leftPtr]+nums[rightPtr];
                if(sum==0){
                    res.push_back({nums[itr],nums[leftPtr],nums[rightPtr]});
                    leftPtr++;
                    rightPtr--;
                    //Skip duplicates
                    while(leftPtr<rightPtr && nums[leftPtr]==nums[leftPtr-1])leftPtr++;
                    while(leftPtr<rightPtr && nums[rightPtr]==nums[rightPtr+1])rightPtr--;
                }
                else if(sum<0)leftPtr++;
                else rightPtr--;
            }
        }
        return res;
        
    }
};