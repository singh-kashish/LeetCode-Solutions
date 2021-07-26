class Solution {
public:
    vector<int> sortedSquares(vector<int>&nums) {
        vector<int>result(nums.size(),0);
        int l=0,r=nums.size()-1;
        for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[r])>abs(nums[l]))result[k] = nums[r]*nums[r--];
            else result[k]=nums[l]*nums[l++];
        }
        return result;
    }
};