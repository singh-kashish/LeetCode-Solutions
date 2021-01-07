class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> res(candies.size(),0);
        int maxi=0,n=candies.size();
        for(int i=0;i<n;i++){
            maxi=max(candies[i],maxi);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxi)res[i]=1;
        }
        return res;
    }
};