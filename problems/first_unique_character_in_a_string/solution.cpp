class Solution {
public:
    int firstUniqChar(string str) {
        unordered_map<char,int>s;
        for(auto x:str){
            s[x]++;
        }
        for(int i=0;i<str.length();i++){
            auto itr=s.find(str[i]);
            if(itr->second==1)return i;
        }
        return -1;
    }
};