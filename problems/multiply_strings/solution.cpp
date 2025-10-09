class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size(), n2 = num2.size();
        vector<int>res(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            int digit1 = num1[i]-'0';
            for(int j=n2-1;j>=0;j--){
                int digit2 = num2[j]-'0';
                int posRight = i+j+1;
                int sum = (digit1*digit2)+res[posRight];
                res[posRight] = sum%10;
                res[posRight-1]+= (sum/10);
            }
        }
    string toReturn;
    int k=0;
    while(k<n1+n2 && res[k]==0)k++;
    if(k==n1+n2)return "0";
    while(k<n1+n2){
        toReturn+= res[k]+'0';
        k++;
    }
    return toReturn;
    }
};