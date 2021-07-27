class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
                int left=i+1,right=n-1;
                while(left<right){
                    int sum = nums[left]+nums[right]+nums[i];
                    if(sum==0){
                        vector<int>triplet={nums[i],nums[left],nums[right]};
                        result.push_back(triplet);
                        while(left<right and nums[left]==triplet[1]){
                            left++;
                        }
                        while(right>left and nums[right]==triplet[2]){
                            right--;
                        }
                    }
                else if(nums[left]+nums[right]+nums[i]>0)right--;
                else left++;
                }
            while(i+1<n and nums[i]==nums[i+1])i++;
        }
        return result;
    }
};