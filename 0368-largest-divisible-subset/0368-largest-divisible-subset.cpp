class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n,vector<int>()));
      return   help(nums,-1,0,dp);
    }
    vector<int> help(vector<int>&nums,int p,int i,vector<vector<vector<int>>>&dp){
        if(i>=nums.size())return {};
        if(dp[p+1][i].size()!=0)return dp[p+1][i];
        if(p==-1){
            vector<int> a=help(nums,p,i+1,dp);
            vector<int> b=help(nums,i,i+1,dp);
            b.insert(b.begin(),nums[i]);
            if(a.size()>b.size())return dp[p+1][i]=a;
            return dp[p+1][i]=b;
        }
        if(nums[i]%nums[p]==0){
            vector<int> a=help(nums,p,i+1,dp);
            vector<int> b=help(nums,i,i+1,dp);
            b.insert(b.begin(),nums[i]);
            if(a.size()>b.size())return dp[p+1][i]=a;
            return dp[p+1][i]=b;
        }
         return dp[p+1][i]=help(nums,p,i+1,dp);

    } 
};