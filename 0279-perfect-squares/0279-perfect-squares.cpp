class Solution {
public:
    int numSquares(int n) {
        vector<vector<int>>dp(n,vector<int>(sqrt(n)+1,-1));
     return  help(n,1,dp);
    }
    int help(int n,int i,vector<vector<int>>&dp){
        if(n<i*i)return INT_MAX-10000;
        if(n==i*i)return 1;
        if(dp[n-1][i-1]!=-1)return dp[n-1][i-1];
        return dp[n-1][i-1]=min(help(n,i+1,dp),help(n-i*i,i,dp)+1);
    }
};