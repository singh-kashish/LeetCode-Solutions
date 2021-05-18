class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int low=0,high=str.length()-1;
        while(low<=high){
            if(str[low]!=str[high])return false;
            low++;
            high--;
        }
        return true;
    }
};