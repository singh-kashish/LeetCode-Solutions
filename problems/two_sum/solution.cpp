class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nu(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    nu[0]=i;
                    nu[1]=j;
                    break;
                }
            }
        }      
    return nu;
    }
    
};