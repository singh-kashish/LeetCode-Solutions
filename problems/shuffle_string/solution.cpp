class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string p=s;
        for(int i=0;i<s.length();i++){
            p[indices[i]]=s[i];
        }
        return p;
    }
};