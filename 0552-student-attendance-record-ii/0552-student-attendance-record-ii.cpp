class Solution {
public:
    int mod =1e9+7;
    int checkRecord(int n) {
       vector<vector< vector<int>>>dp(n,vector<vector<int>>(4,vector<int>(2,-1)));
      return  help(n,0,0,dp); 
    }
    int help(int n,int a,int l,vector<vector< vector<int>>>&dp){
        if(n==0)return 1;
        if(dp[n-1][l][a]!=-1)return dp[n-1][l][a];
        long  t=0;
        t=(t+help(n-1,a,0,dp))%mod;
        if(a==0) t=(t+help(n-1,1,0,dp))%mod;
        if(l<2)t=(t+help(n-1,a,l+1,dp))%mod;
       return dp[n-1][l][a]=t;
    }
};