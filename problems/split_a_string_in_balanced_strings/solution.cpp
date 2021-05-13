class Solution {
public:
    int balancedStringSplit(string s) {
        int right=0,left=0,ans=0;
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='R')right++;
            else if(s[i]=='L')left++;
            if(right==left and right!=0){
                ans++;
                right=0;
                left=0;
            }
        }
        return ans;
    }
};