class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int m=INT_MIN;
        int mm=INT_MAX;
        for(auto x:nums){
            m=max(m,x);
            mm=min(mm,x);
        }
        if(mm<0){
            m+=abs(mm);
        for(int i=0;i<nums.size();i++){
            nums[i]+=abs(mm);
        }}
        vector<vector<int>>dp(m+2,vector<int>(n,-1));
        return help(nums,0,-1,dp);
    }
    int help(vector<int>&nums,int i,int l,vector<vector<int>>&dp){
        if(i>=nums.size())return 0;
        if(dp[l+1][i]!=-1)return dp[l+1][i];
        int t=0;
        if(l<nums[i])
            t=help(nums,i+1,nums[i],dp)+1;
        t=max(t,help(nums,i+1,l,dp));
        return  dp[l+1][i]=t;
    }
};