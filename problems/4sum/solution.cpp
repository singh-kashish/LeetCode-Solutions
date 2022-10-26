class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.size()==0)return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            long long int sum_1 = target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                int start = j+1;
                long long int sum_2=sum_1-nums[j];
                int end = nums.size()-1;
                while(start<end){
                    long long int sum = nums[start]+nums[end];
                    if(sum<sum_2){
                        start++;
                    }
                    else if(sum>sum_2){
                        end--;
                    }
                    else{
                        vector<int>quad = {nums[i],nums[j],nums[start],nums[end]};
                        res.push_back(quad);
                        while(start<end and nums[start]==quad[2])start++;
                        while(start<end and nums[end]==quad[3])end--;
                    }
                }
                while(j+1<nums.size() and nums[j]==nums[j+1])++j;
            }
            while(i+1<nums.size() and nums[i]==nums[i+1])++i;
        }
        return res;
    }
};