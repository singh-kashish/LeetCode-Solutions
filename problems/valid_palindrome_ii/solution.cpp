class Solution {
public:
    bool checker(string s,int left,int right,int count){
        if(count>1)return false;
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return (checker(s,left,right-1,count+1) or checker(s,left+1,right,count+1)); 
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        return checker(s,0,s.length()-1,0);
    }
};