class Solution {
public:
    int firstUniqChar(string str) {
       unordered_map<char,int>m;
        for(auto x:str)m[x]++;
        for(auto i=0;i<str.length();i++){
            if(m[str[i]]==1)return i; 
        }
        return -1;
    }
};