class Solution {
public:
    int histogram(vector<int>v){
        int n=v.size();
      
        if(n==0)return 0;
        int res=-1,curr;
        stack<int>st;
        for(int i=0;i<n;i++){
            while( !st.empty() and v[st.top()]>=v[i]){
                int ht=st.top();
                st.pop();
                curr = v[ht] * ( st.empty() ? i : i - st.top() - 1 );
                res=max(res,curr);
            }
            st.push(i);
        }
        while(st.empty()==false){
            int ht=st.top();
            st.pop();
            curr = v[ht] * ( st.empty() ? n : n - st.top() -1 );
            res=max(curr,res);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        if(n==0)return 0;
        
       
        int res=0;
        vector<vector<int>>v(matrix.size() , vector<int> (matrix[0].size(),0));
        
        for(int i=0;i<matrix[0].size();i++)v[0][i]=matrix[0][i]-'0';
        res=histogram(v[0]);
        for(int i=1;i<matrix.size();i++){
            for(int j=0 ;j<matrix[i].size() ; j++){
                if(matrix[i][j]=='0'){
                    v[i][j]=matrix[i][j]-'0';
                }
                else{
                    v[i][j]=matrix[i][j]+v[i-1][j]-'0';
                    
                }
            }
            res=max(res,histogram(v[i]));
        }
        // for(auto x:v){
        //     for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
        //     cout<<endl;
        // }
       
       return res;
        
    }
};