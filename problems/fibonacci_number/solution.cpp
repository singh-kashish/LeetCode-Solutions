class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        else if(n==1 || n==2)return 1;
        int fibonaci[n+1];
        fibonaci[0]=0;
        fibonaci[1]=1;
        for(int i=2;i<=n;i++){
            fibonaci[i]=fibonaci[i-1]+fibonaci[i-2];
        }
        return fibonaci[n];
    }
};