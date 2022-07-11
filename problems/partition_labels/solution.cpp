class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        if( n==1 or n==2)return {n};
        unordered_map<char,int>dict;
        for(auto x:s){
            dict[x]++;
        }
        vector<int>result;
        unordered_set<char>charsTillNow;
        int left = 0;
        for(int i=0;i<s.length();i++){
            charsTillNow.insert(s[i]);
            dict[s[i]]--;
            if(dict[s[i]]==0){
                bool flag = true;
                for(auto y:charsTillNow){
                    if(dict[y]!=0){
                        flag=false;
                    }
                    if(!flag)break;
                }
                if(flag){
                    result.push_back(i-left+1);
                    left = i+1;
                }
            }
        }
        return result;
    }
};