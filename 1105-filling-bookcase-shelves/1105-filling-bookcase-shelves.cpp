class Solution {
public:
// vector<int>save;
// int ans;
    int minHeightShelves(vector<vector<int>>& b, int w) {
        vector<vector<vector<int>>>dp(b.size(),vector<vector<int>>(w+1,vector<int>(1001,-1)));
        return help(b,0,0,0,w,dp);
    }
    // int mi=0;
    int help(vector<vector<int>>& b, int i,int s, int m,int &w,vector<vector<vector<int>>>&dp){
        if(i>=b.size())return m;
        if(dp[i][s][m]!=-1)return dp[i][s][m];
        int t=INT_MAX;
        if(s+b[i][0]<=w){
            int y=max(m,b[i][1]);
             t=help(b,i+1,s+b[i][0],y,w,dp);
        }
        t=min(t,m+help(b,i+1,b[i][0],b[i][1],w,dp));
       return dp[i][s][m]= t;
    }
};