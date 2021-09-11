class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==1){
            if(nums[0]==k)return 1;
            else return 0;
        }
        int count = 0,sum=0;
        unordered_map<int,int>s;
        s[0]=1;
        for(auto x:nums){
            sum+=x;
            if(s.find(sum-k)!=s.end()){count+=s[sum-k];
            }
            s[sum]=s.find(sum)==s.end()?1:s[sum]+1;
        }
        return count;
    }
};