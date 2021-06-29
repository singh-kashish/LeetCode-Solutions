class Solution {
public:
    string reverse(string &str,int i,int j){
        while(i<=j)swap(str[i++],str[j--]);
        return str;
    }
    string reverseStr(string s, int k) {
        if(s.length()<k)return reverse(s,0,s.length()-1);
        for(int i=0;i<s.length();i+=2*k){
            if(i+k-1<s.length())reverse(s,i,i+k-1);
            else reverse(s,i,s.length()-1);
        }
        return s;
    }
};