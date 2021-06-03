class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        verticalCuts.push_back(0);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int horMax=0,verMax=0;
        verticalCuts.push_back(w);
        horizontalCuts.push_back(h);
        
        for(int i=1;i<horizontalCuts.size();i++){
            
            if(horMax<horizontalCuts[i]-horizontalCuts[i-1])horMax=horizontalCuts[i]-horizontalCuts[i-1];
        }
        
        
        for(int i=1;i<verticalCuts.size();i++){
            if(verMax<verticalCuts[i]-verticalCuts[i-1])verMax=verticalCuts[i]-verticalCuts[i-1];

        }
        return (verMax*horMax)%1000000007;
    }
};