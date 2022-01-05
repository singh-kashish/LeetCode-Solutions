class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size() , p = l.size();
        vector<bool>result(p,false);
        for( int i = 0 ; i < p ; i++ ){
            int start = l[i] , end = r[i];
            if(end-start<2)result[i]=true;
            else{
                vector<int>temp(nums.begin()+start,nums.begin()+end+1); 
                sort(temp.begin(),temp.end());
                int d = temp[1]-temp[0];
                bool flag = false;
                for(int j=1;j<temp.size();j++){
                    if( d!=temp[j]-temp[j-1]){
                        result[i]=false;
                        flag=true;
                        break;
                    }
                }
                if(flag==false)result[i]=true;
            }
        }
        return result;
    }
};