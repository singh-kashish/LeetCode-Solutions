class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int itr = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[itr++]=nums[i];
            }
        }
        for(int i=itr;i<nums.size();i++)nums[i]=0;
        return;
    }
};