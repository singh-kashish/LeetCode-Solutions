class Solution {
public:
    string createHash(string s){
        vector<int>hashArr(26);
        for(auto x:s){
            hashArr[x-'a']++;
        }
        string res;
        for(auto x:hashArr)res+=x+',';
        return res;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==1)return {strs};
        unordered_map<string,vector<string>>hash;
        for(auto x: strs){
            string hashForX = createHash(x);
            hash[hashForX].push_back(x);
        }
        vector<vector<string>>res;
        for(auto [first,second]: hash){
            res.push_back(second);
        }
        return res;
    }
};