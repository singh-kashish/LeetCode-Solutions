class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.length()==t.length())return ' ';
        int hex[26]={0};
        for(int i=0;i<s.length();i++){
            hex[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            if(hex[t[i]-'a']==0)return t[i];
            else hex[t[i]-'a']--;
        }
        return ' ';
        
    }
};