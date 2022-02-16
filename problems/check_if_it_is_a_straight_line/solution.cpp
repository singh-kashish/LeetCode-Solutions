class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n==1 or n==2)return true;
        else{
            for(int i=1;i<n-1;i++){
                int a,b,c,d;
                b = coordinates[i][0]-coordinates[i-1][0];
                a = coordinates[i][1]-coordinates[i-1][1];
                d = coordinates[i+1][0]-coordinates[i][0];
                c = coordinates[i+1][1]-coordinates[i][1];
                if(b==0 and d==0)continue;
                else if((b==0 and d!=0) or (b!=0 and d==0))return false;
                else if( (float)a/b!= (float)c/d)return false;
            }
            return true;
        }
    }
};