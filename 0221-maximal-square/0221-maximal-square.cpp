class Solution {
public:
    int maximalSquare(vector<vector<char>>& mo) {
        int m=mat.size();
        int n=mat[0].size();
       vector<vector<int>>mat(m,vector<int>(n,0));
        for(int i=0;i<m;i++) mat[0][i]=(mo[0][i]=='1')?1:0;
        

        int ans=0;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
               if(mat[i][j]=='1'){
                mat[i][j]=min(mat[i-1][j],min(mat[i][j-1],mat[i-1][j-1]))+1;
                int t=mat[i][j];
                ans = max(ans,t);
               }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
    }
   
};