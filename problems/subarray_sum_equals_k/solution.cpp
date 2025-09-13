class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       m[0]=1;
       int sum=0, res=0;
       for(int num:nums){
        sum+=num;
        if(m.find(sum-k)!=m.end()){
            res+=m[sum-k];
        }
        m[sum]++;
       } 
       return res;
    }
};