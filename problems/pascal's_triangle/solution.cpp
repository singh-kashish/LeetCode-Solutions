class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
            vector<int>temp;
            for(int j=0;j<=i;j++){
                 if(j==i || j==0)temp.push_back(1);
                
                else{
                    int p=result[i-1][j-1]+result[i-1][j];
                     temp.push_back(p);
                }
            }
            result.push_back(temp);
            
        }
        //vector<int>v{1,2,3};
        //result.insert(result.end(),v);
        return result;
    }
};