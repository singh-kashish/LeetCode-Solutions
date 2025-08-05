class Solution {
public:
    bool isAnagram(string s, string t) {
        // Use hash map to store the occurences of every character in 1st string
        unordered_map<char,int> st;
        for(auto x: s)st[x]++;
        // Traverse the second string and decrement the occurence of every character
        for(auto x:t)st[x]--;
        // Traverse the map and check if all keys have value of 0, if yes return true, if any key's value isn't 0 then return false;
        for(auto [x,y]:st){
            if(y!=0)return false;
        }
        return true;
    }
};