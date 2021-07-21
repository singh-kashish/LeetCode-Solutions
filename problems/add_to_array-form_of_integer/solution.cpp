class Solution {
public:
    void reverse(vector<int>&num){
        int i=0;
        int j=num.size()-1;
        while(i<=j)
        {
            swap(num[i],num[j]);
            i++;j--;
        }
        return;
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        reverse(num);
        vector<int>res;
        int i=0,sum=0,carry=0;
        while(i<num.size() or k>0){
            int a = i<num.size() ? num[i]:0;
            int b = k>0 ? k%10 : 0;
            sum = a+b+carry;
            carry = sum/10;
            if(sum>9)sum=sum%10;
            res.push_back(sum);
            i++;k=k/10;
        }
        if(carry!=0)res.push_back(carry);
        reverse(res);
        return res;
    }
};