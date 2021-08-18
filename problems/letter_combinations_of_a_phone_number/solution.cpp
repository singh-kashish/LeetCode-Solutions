class Solution {
public:
    string dictionary(char x){
        switch(x){
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
            default:
                return "";
        }
    }
    
    void solve(string curr,int left,string digits,vector<string>&result){
        if(left>digits.length())return;
        if(curr.length()==digits.length()){
            result.push_back(curr);
            return;
        }
        int n=digits.length();
        for(int i=left;i<n;i++){
            string dict=dictionary(digits[i]);
            for(int j=0;j<dict.length();j++){
                solve(curr+dict[j],i+1,digits,result);
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>result;
        if(digits.length()==0)return {};
        solve("",0,digits,result);
        return result;
    }
};