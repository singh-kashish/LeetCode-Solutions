class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>prev{1};
        if(rowIndex==0)return prev;
        for(int i=1;i<=rowIndex;i++){
            vector<int>v(i+1,0);
            v[0]=1;
            v[i]=1;
            if(i>=2){
                for(int j = 0;j<i-1;j++){
                v[j+1]=prev[j]+prev[j+1];
                }    
            }
            prev.clear();
            for(auto x:v)prev.push_back(x);
            
        }
        return prev;
    }
};