class Solution {
public:
    void reverse(string &a){
        int start= 0,end = a.length()-1;
        while(start<=end){
            swap(a[start],a[end]);
            start++;end--;
        }
    }
    string addStrings(string num1, string num2) {
        if(num1.length()==0)return num2;
        if(num2.length()==0)return num1;
        reverse(num1);reverse(num2);
        int i=1,j=1;
        string res="";
        int sum = num1[0]+num2[0]-'0'-'0';
        int carry = sum/10;
        if(sum>9)sum= sum%10;
        res = res + to_string(sum);
        while(i<num1.length() or j<num2.length()){
            int a = i<num1.length() ? num1[i]-'0' : 0;
            int b = j<num2.length() ? num2[j]-'0' : 0;
            sum = a + b + carry;
            carry=sum/10;
            sum = sum > 9 ? sum%10 :sum;
            res+=to_string(sum);
            i++;j++;
        }
        if(carry!=0)res+=to_string(carry);
        reverse(res);
        return res;
    }
};