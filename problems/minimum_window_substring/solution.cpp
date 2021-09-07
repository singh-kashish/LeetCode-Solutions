class Solution {
public:
    string minWindow(string s, string t) {
         if(s.length()==0 or t.length()==0 or s.length()<t.length())return "";
            
            unordered_map<char,int>dict;
            for(auto x:t)dict[x]++;
            
            vector<int>ans{-1,10000000};
            int left = 0, right = 0 ,count = dict.size();
            while(right<s.length()){
                char curr = s[right];
                if(dict.find(curr)!=dict.end()){
                    dict[curr]--;
                    if(dict[curr]==0)count--;
                }
                while(count==0){
                    if(right-left<ans[1]-ans[0])ans = {left,right};
                     char curr = s[left];
                    if(dict.find(curr)!=dict.end())dict[curr]++;
                    if(dict.find(curr)!=dict.end() and dict[curr]>0)count++;
                    left++;
                }
                 right++;
                }
            if(ans[0]==-1 and ans[1]==10000000)return "";
            return s.substr(ans[0],ans[1]-ans[0]+1);
           
    }
};