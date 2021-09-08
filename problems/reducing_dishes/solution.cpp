class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int total = 0 , res = 0 , n = satisfaction.size();
        for(int i = n-1 ; i >= 0 and satisfaction[i]+total>0 ; i--){
            total+= satisfaction[i];
            res+=total;
        }
        return res;
    }
};