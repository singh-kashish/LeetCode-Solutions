class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int n=s.length(),res=0;
        unordered_map<char,int>dict;
        for(int i=0;i<n;i++){
            if(dict.find(s[i])==dict.end()){
                dict[s[i]]=i;
                int si=dict.size();
                res=max(res,si);
            }
            else{
                int to = dict[s[i]];
                for(int p=left;p<to;p++){
                    dict.erase(s[p]);
                }
                dict[s[i]]=i;
                left=to+1;
            }
        }
        return res;
    }
};