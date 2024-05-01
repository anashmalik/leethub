class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,-1));
       return help(nums1,nums2,0,0,dp);
    }
    int help(vector<int>& nums1, vector<int>& nums2,int i,int j, vector<vector<int>>&dp){
        if(i>=nums1.size() or j>=nums2.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int t=INT_MIN;
        if(nums1[i]==nums2[j]){
            t=max(t,help(nums1,nums2,i+1,j+1,dp)+1);
        }
      else { t=max(t,help(nums1,nums2,i,j+1,dp));
        t=max(t,help(nums1,nums2,i+1,j,dp));}
        return dp[i][j]=t;
    }
};