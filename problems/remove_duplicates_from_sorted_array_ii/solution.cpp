class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(auto x:nums){
            // i<2 or i<k is written to make sure we don't need to check the first 2 or k elements since negative values of indices
            // since we need to store at max 2 or k vals , we could simply say if the current value is greater than the last filled -2 or  -k value, then we have a new number to fill , else we ignore that number
            if(i<2 or x>nums[i-2]){
                nums[i++]=x;
            }
        }
        return i;
        
    }
};