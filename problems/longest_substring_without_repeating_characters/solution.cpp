class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        if(length==0 || length==1)return length;
        int longestSubString = 1, leftPtr=0;
        unordered_set<char>st;
        for(int rightPtr=0; rightPtr<length; rightPtr++){
            while(st.find(s[rightPtr])!=st.end()){
                st.erase(s[leftPtr]);
                leftPtr++;
            }
            st.insert(s[rightPtr]);
            longestSubString = max(rightPtr-leftPtr+1,longestSubString);
        }
        return longestSubString;
    }
};