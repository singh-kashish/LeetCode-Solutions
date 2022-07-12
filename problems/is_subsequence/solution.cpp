class Solution {
public:
    bool isSubsequence(string s, string t) {
        int itr=0,ptr=0; // itr for string s and ptr for string t
        while(ptr<t.length()){
            if(s[itr]==t[ptr]){
                itr++;
                ptr++;
            }
            else ptr++;
        }
        return itr >= s.length();
    }
};