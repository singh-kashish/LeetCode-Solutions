class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string finalString1="" , finalString2="";
        for(int i=0;i<s.length();i++){
            if(finalString1.length()==0 and s[i]!='#')finalString1.push_back(s[i]);
            else if(s[i]=='#' and finalString1.length()==0 )continue;
            else if(s[i]=='#')finalString1.pop_back();
            else finalString1.push_back(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(finalString2.length()==0 and t[i]!='#')finalString2.push_back(t[i]);
            else if(t[i]=='#' and finalString2.length()==0)continue;
            else if(t[i]=='#')finalString2.pop_back();
            else finalString2.push_back(t[i]);
        }
        return finalString1 == finalString2;
    }
};