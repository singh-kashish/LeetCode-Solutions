class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0,count=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(count==0){
                maj = i;
                count=1;
            }
            else if(nums[maj]==nums[i])count++;
            else if(nums[maj]!=nums[i])count--;
            
        }
        // check 
        count = 0;
        for(int i=0;i<n;i++){
            if(nums[maj]==nums[i])count++;
        }
        if(count>=n/2)return nums[maj];
        else return -1;
    }
};