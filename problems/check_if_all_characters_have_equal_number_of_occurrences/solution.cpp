class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        int count = m[s[0]];
        for(auto x:m){
            if(x.second!=count)return false;
        }
        return true;
    }
};