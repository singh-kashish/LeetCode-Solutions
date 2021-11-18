class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>result;
        if(n==0)return result;
        sort(nums.begin(),nums.end());
        for( int i=0; i<n; i++){
            for( int j = i + 1 ; j < n; j++ ){
                int left = j+1 ,right = n-1;
                int target_1 = target - (nums[i]+nums[j]);
                while(left<right){
                    if(target_1 < nums[left]+nums[right] )right--;
                    else if(target_1 > nums[left] + nums[right])left++;
                    else{
                        vector<int>quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[left];
                        quad[3] = nums[right];
                        result.push_back(quad);
                        while(left<right and quad[2]==nums[left])left++;
                        while(right>left and quad[3]==nums[right])right--;
                    }
                }
                while(j+1<n and nums[j]==nums[j+1])j++;
            }
                while(i+1<n and nums[i]==nums[i+1])i++;
        }
        return result;
    }
};