class Solution {
public:
    int longestCommonSubsequence(string t, string tt) {
        vector<vector<int>>dp(t.size()+1,vector<int>(tt.size()+1,0));
        for(int i=1;i<=t.size();i++){
            for(int j=1;j<=tt.size();j++){
                if(t[i-1]==tt[j-1])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[t.size()][tt.size()];
    }
};