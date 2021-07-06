class Solution {
public:
    string cmp(string a,string b){
        int n=a.length(),m=b.length();
        if(a[0]!=b[0])return "";
        int i=0;
        while(i<n and i<m and a[i]==b[i]){
            i++;
        }
        if(n>m){
            return b.substr(0,i);
        }
        else return a.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)return "";
        if(n==1)return strs[0];
        sort(strs.begin(),strs.end());
        return cmp(strs[0],strs[n-1]);
    }
};