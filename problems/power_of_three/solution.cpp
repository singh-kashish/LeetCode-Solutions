class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        else{
         int max3=pow(3,19);
        return n>0 and max3%n==0;
        }
    }
};