class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        int n = s.length();
        for( int i=0 ; i<n ; i++ ){
            if(result.length()==0)result = result + s[i];
            else if(result[result.length()-1] == s[i] )result.pop_back();
            else result.push_back(s[i]);
        }
        return result;
    }
};