class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1)return 1;
      unordered_set<int>se;
        int left=0,right=1;
        int res=0;
        se.insert(s[0]);
        int curr=1;
        while(right<s.length() and left<s.length()){
            if(se.find(s[right])==se.end()){
                curr++;
                res=max(res,curr);
                se.insert(s[right++]);
            }
            else{
                res=max(res,curr);
                curr=1;
                left++;
                se.clear();
                se.insert(s[left]);
                right=left+1;
            }
        }
        return res;
    }
};