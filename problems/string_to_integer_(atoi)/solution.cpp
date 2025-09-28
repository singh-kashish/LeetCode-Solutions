class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while(s[i]==' ')i++;
        int sign = 1;
        if(i<n && (s[i]=='+'||s[i]=='-')){
            sign = (s[i]=='-')?-1:1;
            i++;
        }
        long long res=0;
        while(i<n && isdigit(s[i])){
            int digit = s[i]-'0';
            if(res>(INT_MAX-digit)/10){
                return sign==1?INT_MAX:INT_MIN;
            }
            res=res*10+digit;
            i++;
        }
        res*=sign;
        if(res<INT_MIN)return INT_MIN;
        if(res>INT_MAX)return INT_MAX;
        return res;
    }
};