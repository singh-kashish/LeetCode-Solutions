class Solution {
public:
    string minWindow(string s, string t) {
        if(s.empty() || t.empty())return "";
        unordered_map<char,int>need,window;
        for(char c:t){
            need[c]++;
        }
        int required = need.size();
        int left=0,right=0;
        int minLength = INT_MAX,minLeft = 0;
        int formed=0;
        while(right<s.size()){
            char c = s[right];
            window[c]++;
            // If current char is in need and the count in need and window hash maps of char is same increment formed
            if(need.count(c) && window[c]==need[c]){
                formed++;
            }
            // Shrink window from left till required size is same as formed size
            while(left<=right && formed==required){
                // Update Minimum Window length and minLeft
                if(right-left+1<minLength){
                    minLength = right-left+1;
                    minLeft=left;
                }
                char d = s[left];
                window[d]--;
                // Decrement Count of Formed if char is in need and count of this char in need is more than in window 
                if(need.count(d) && need[d]>window[d]){
                    formed--;
                }
                // Move left pointer now
                left++;
            }
            // Increase window size
            right++;
        }
        return minLength == INT_MAX ? "" : s.substr(minLeft,minLength);
    }
};