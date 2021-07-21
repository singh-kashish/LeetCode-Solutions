class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size()-1;
        if(digits[end]!=9){
            digits[end]+=1;
            return digits;
        }
        else{
            int sum =0;
            int carry = 1;
            digits[end] = sum;
            end--;
            while(end>=0){
                if(carry==0)return digits;
                sum = digits[end] + carry;
                carry = sum /10;
                sum = sum>9 ? sum%10 : sum;
                digits[end] = sum;
                end--;
            }
            if(carry!=0)digits.insert(digits.begin(),1);
            return digits;
        }
    }
};