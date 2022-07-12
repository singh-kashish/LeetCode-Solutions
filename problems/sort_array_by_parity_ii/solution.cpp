class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       
        int n = nums.size(),i=0;
        int evenPtr = 0 , oddPtr = n-1; 
        while(evenPtr<n){
            while(evenPtr<n and nums[evenPtr]%2==0)evenPtr+=2;
            if(evenPtr==n)break;
            while(oddPtr>=0 and nums[oddPtr]%2!=0)oddPtr-=2;
            swap(nums[evenPtr],nums[oddPtr]);
           
        }
        return nums;
    }
};