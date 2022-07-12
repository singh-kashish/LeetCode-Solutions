class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right=s.length()-1;
        while(left<right){
            while(true and left<right){
                if( (s[left] >='a' and s[left]<='z') or ( s[left]>='A' and s[left]<='Z') or isdigit(s[left]) )break;
                else left++;
            }
            while(true and left<right){
                if( (s[right] >='a' and s[right]<='z') or ( s[right]>='A' and s[right]<='Z') or isdigit(s[right])  )break;
                else right--;
            }
            if(left<=right and left<=s.length() and tolower(s[left]) == tolower(s[right]) ){
                left++;
                right--;
            }
            else return false;
        }
        return true;
    }
};