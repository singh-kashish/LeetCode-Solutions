class Solution {
public:
    bool palindromeCheck(string s){
        int l=0,r=s.length()-1;
        while(l<=r){
            if(s[l]!=s[r])return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        
        string str;
        for(auto x:s){
            if(isalpha(x))str+=tolower(x);
            if(isdigit(x))str+=x-'0';
        }
       if(str.length()==0){
           return true;
       }
    
        return palindromeCheck(str);
    }
};