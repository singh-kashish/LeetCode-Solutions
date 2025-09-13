class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = squareOfDigits(slow);
            fast = squareOfDigits(squareOfDigits(fast));
            if(fast==1)return true; 
        } while(slow!=fast);
        return slow==1;
    }
    int squareOfDigits(int n){
        int sum = 0;
        while(n>0){
            int digit = n%10;
            sum+=digit*digit;
            n = n/10;
        }
        return sum;
    }
};