class Solution {
public:
    string longestP(string s,int l,int r){
        int n=s.length();
        while(l>=0 and r<n and s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string longest=s.substr(0,1);
        for(int i=0;i<n;i++){
            string p=longestP(s,i,i);
            if(p.length()>longest.length()){
                longest=p;
            }
            string p2=longestP(s,i,i+1);
            if(p2.length()>longest.length()){
                longest=p2;
            }
        }
        return longest;
    }
};