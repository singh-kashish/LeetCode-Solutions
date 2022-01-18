class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,result = 0 , n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i]==0){
                count = 0;
            
            }
            else{
                count++;
                result=max(count,result);
            }
        }
        return result;
    }
};