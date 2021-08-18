class Solution {
public:
    void solve(int curr,string str,vector<string>&res){
        if(curr==str.length()){
            res.push_back(str);
            return;
        }
        if(str[curr]>='0' and str[curr]<='9')solve(curr+1,str,res);
        else if( toupper(str[curr]) != str[curr] ){
            string temp = str.substr(0,curr) + (char)toupper(str[curr]) + str.substr(curr+1,str.length()-curr-1);
            solve(curr+1,temp,res);
            solve(curr+1,str,res);
        }
        else if(tolower(str[curr])!=str[curr]){
            string temp = str.substr(0,curr)+(char)tolower(str[curr])+str.substr(curr+1,str.length()-curr-1);
            solve(curr+1,temp,res);
            solve(curr+1,str,res);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>res;
        solve(0,s,res);
        return res;
    }
};