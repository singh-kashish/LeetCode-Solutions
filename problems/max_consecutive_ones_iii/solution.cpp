class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(k==0){
            int result = 0,count=0;
            for(auto x:nums){
                if(x==0){
                    count =0;
                }
                else {
                    count++;
                    result = max(result,count);
                }
            }
            return result;
        }
        int result = 0 , max_count = 0 , n = nums.size() ;
        int start = 0;
        int dict[2];
        memset(dict,0,sizeof(dict));
        for(int end = 0 ; end < n; end++){
            dict[nums[end]]++;
            
            while(dict[0] > k ){
                dict[nums[start]]--;
                start++;
            }
            result = max(result , end-start+1);
        }
        return result;
    }
};