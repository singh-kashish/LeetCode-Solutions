class Solution {
public:
    
    string addBinary(string A, string B) {
        string res="";
        int n=A.length(),m=B.length();
        if(n==0)return B;
        if(m==0)return A;
        int sum,carry=0;
        int i=n-1,j=m-1;
        while(i>=0 or j>=0){
            sum=carry;
            if(i>=0)sum+=A[i]-'0';
            if(j>=0)sum+=B[j]-'0';
            i--;j--;
            res = to_string(sum%2)+res;
            carry=sum/2;
        }
        if(carry!=0)res= '1'+res;
        return res;
        
    }
};