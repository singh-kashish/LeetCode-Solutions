class Solution {
public:
    void generate(vector<vector<int>>&result,vector<int>&nums,int i,vector<int>temp){
        int n = nums.size(); 
        if(i==n){ 
            result.push_back(temp);
            return;
        }
        
        if(i>n)return;
        else{
                // two options => add it to current list or don't
                generate(result,nums,i+1,temp);
                temp.push_back(nums[i]);
                generate(result,nums,i+1,temp);
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        generate(result,nums,0,temp);
        return result;
    }
};