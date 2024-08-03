class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        vector<vector<vector<int>>>dp(p.size(),vector<vector<int>>(p.size()+1,vector<int>(k+1,-1)));
      return  help(k,p,0,p.size(),dp);
    }
    int help(int k,vector<int>& p,int i,int j,vector<vector<vector<int>>>&dp){
        if(i>=p.size())return 0;
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        int t=0;
        if(j==p.size()){
            if(k)
            t=help(k-1,p,i+1,i,dp);
        }
        else if(p[j]<p[i]){
            t=help(k,p,i+1,p.size(),dp) + p[i]-p[j];
        }
        t=max(t,help(k,p,i+1,j,dp));
        return dp[i][j][k]= t;
    }
};