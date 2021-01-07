class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>sma(nums.size());
        for(int i=0;i<nums.size();i++){
            int np=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j] && i!=j)np++;
            }
            sma[i]=np;
        }
    return sma;
    }
};