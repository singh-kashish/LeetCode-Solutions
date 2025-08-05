class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==0)return -1;
        // Count occurences of chars using a hash map
        unordered_map<char,int> st;
        for(auto x: s)st[x]++;
        // Traverse the array and return index if map has occurence stored as 1, if not found return -1;
        for(int i=0;i<s.length();i++){
            if(st[s[i]]==1)return i; 
        }
        return -1;
    }
};