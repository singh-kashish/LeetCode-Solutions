class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        int prev=0;
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' '){
                string p = s1.substr(prev,i-prev);
                m[p]++;
                prev=i+1;
            }
        }
        m[s1.substr(prev,s1.length()-prev)]++;
        prev=0;
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' '){
                string p = s2.substr(prev,i-prev);
                prev=i+1;
                m[p]++;
                        }
        }
        m[s2.substr(prev,s2.length()-prev)]++;
        vector<string>res;
        for(auto x:m){
            if(x.second==1)res.push_back(x.first);
        }
        return res;
    }
};