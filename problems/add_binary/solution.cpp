class Solution {
public:
    
    string addBinary(string A, string B) {
        int i=A.length()-1,j=B.length()-1;
	    int carry=0;
	    string ans="";
	    while(i>=0 or j>=0){
	        int sum=carry;
	        if(i>=0){
	            sum+=A[i--]-'0';
	        }
	        if(j>=0){
	            sum+=B[j--]-'0';
	        }
	        ans = to_string(sum%2) +ans;
	        carry = sum/2;
	    }
	    if(carry>0){
	        ans = '1'+ans;
	        
	    }
	    return ans;
    }
};