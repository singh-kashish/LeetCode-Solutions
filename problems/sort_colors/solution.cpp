class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 , itr = 0 , high = nums.size()-1;
        // use low as filling index of 0, high as filling index of 2's and itr to move through the array
        while( itr<=high ){
            if(nums[itr]==1){
                itr++;
            }
            else if(nums[itr]==0){
                swap(nums[itr++],nums[low++]);
            }
            else {
                swap(nums[itr],nums[high--]);
            }
        }
    }
};