class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length(), itr=n-1, maxLength=0;
        // Skip through last trailing spaces
        while(itr>=0 && s[itr]==' ')itr--;
        while(itr>=0 && s[itr]!=' '){
            maxLength++;
            itr--;
        }
        return maxLength;
    }
};