class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()<=1)return -1;
        int n=nums.size();
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};