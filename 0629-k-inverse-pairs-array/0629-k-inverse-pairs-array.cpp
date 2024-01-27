class Solution {
public:
    int kInversePairs(int n, int k) {
                const int MOD = 1000000007;
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        for(int i=1;i<=n;i++)dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
               int val = (dp[i - 1][j] + MOD - (j - i >= 0 ? dp[i - 1][j - i] : 0)) % MOD;
                    dp[i][j] = (dp[i][j - 1] + val) % MOD;
            }
        }
        return (dp[n][k] + MOD - (k > 0 ? dp[n][k - 1] : 0)) % MOD;
    }
};