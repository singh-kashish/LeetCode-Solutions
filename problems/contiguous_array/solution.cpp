class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int prefixSum = 0;
        unordered_map<int,int>m;
        m[0]=-1;
        int maxLength=0;
        for(int i=0 ; i< n ; i++){
            prefixSum+=(nums[i]==0?-1:1);
            if(m.find(prefixSum)!=m.end()){
                maxLength = max(maxLength, i - m[prefixSum]);
            } else{
                m[prefixSum]=i;
            }
        }
        return maxLength;
    }
};