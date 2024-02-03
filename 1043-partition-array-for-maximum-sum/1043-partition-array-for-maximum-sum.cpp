class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
       vector<vector<int>>dp(k+1,vector<int>(arr.size()+1,-1));
        return help(arr,k,arr[0],1,k-1,dp);
        
    }
    int help(vector<int>& arr, int &k,int m,int i,int kk, vector<vector<int>>&dp){
        
        if(i>=arr.size())return m*(k-kk);
        if(dp[kk][i]!=-1) return dp[kk][i];
        if(kk==0)return dp[kk][i]= m*k+help(arr,k,arr[i],i+1,k-1,dp);
        return dp[kk][i]= max(m*(k-kk)+help(arr,k,arr[i],i+1,k-1,dp),help(arr,k,max(m,arr[i]),i+1,kk-1,dp));
    }
};