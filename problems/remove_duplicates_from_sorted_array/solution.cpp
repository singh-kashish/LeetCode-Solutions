class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        if(n==0)return 0;
        for(int j=0;j<n;j++){
            
            if(j!=n-1 && nums[j]!=nums[j+1]){
                nums[i]=nums[j];
                i++;
            }
            else if(j==n-1){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};