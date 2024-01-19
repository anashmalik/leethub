class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int  t=INT_MAX;
                if(j>0)t=matrix[i-1][j-1];
                t=min(t,matrix[i-1][j]);
                if(j<m-1)t=min(t,matrix[i-1][j+1]);
                matrix[i][j]+=t;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++)ans=min(ans,matrix[n-1][i]);
return ans;
    }
};