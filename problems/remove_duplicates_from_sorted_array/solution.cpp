class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr=0,itr=1,n=nums.size(),k=0;
        while(itr<n){
            if(nums[ptr]==nums[itr]){
                itr++;
            }
            else{
                nums[ptr+1]=nums[itr];
                ptr++;
                itr++;
            }
        }
        return ptr+1;
    }
};