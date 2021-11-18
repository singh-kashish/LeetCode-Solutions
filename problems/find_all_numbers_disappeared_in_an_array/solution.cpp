class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x:nums)s.insert(x);
        vector<int>result;
        for(int i=1;i<=nums.size() ; i++ ){
            if(s.find(i)==s.end())result.push_back(i);
        }
        return result;
    }
};