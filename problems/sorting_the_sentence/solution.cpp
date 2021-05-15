class Solution {
public:
    string sortSentence(string s) {
        string result="";
       int last=0;
        map<int,string>m;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                
                string p=s.substr(last,i-last);
                m[s[i]]=p;
                
                last=i+2;
            }
        }
        for(auto x:m){
            result+=x.second;
            result+=" ";
        }
        int n=result.size();
        result=result.substr(0,n-1);
        
        return result;
    }
};