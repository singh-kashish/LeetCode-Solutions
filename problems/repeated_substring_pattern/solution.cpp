class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string temp=s;
        s=s+s;
        s=s.substr(1,s.length()-2);
        return s.find(temp)!=-1;
    }
};