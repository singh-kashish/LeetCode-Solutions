class Solution {
public:
    string reverse(string &str,int i,int j){
        while(i<=j)swap(str[i++],str[j--]);
        return str;
    }
    string reverseWords(string s) {
        int prev=0,curr=0,n=s.length();
        bool oneWord=true;
        while(curr<n){
            if(s[curr]==' '){
                reverse(s,prev,curr-1);
                prev=curr+1;
                oneWord=false;
            }
            if(curr==n-1 and oneWord)return reverse(s,0,n-1);
            if(curr==n-1)reverse(s,prev,curr);
            curr++;
        }
        return s;
        }
};