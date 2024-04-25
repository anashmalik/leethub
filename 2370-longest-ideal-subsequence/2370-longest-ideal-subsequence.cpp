class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(27,-1));
        return help(s,0,k,dp,('z'+1));
        
    }
    int help(string &s,int i,int &k, vector<vector<int>>&dp,char last){
        if(i==s.size())return 0;
        if(dp[i][last-'a']!=-1)return dp[i][last-'a'];
        if(last==('z'+1)){
            return dp[i][last-'a']=max(help(s,i+1,k,dp,s[i])+1,help(s,i+1,k,dp,last));
        }
        if(abs(last-s[i])<=k) return max(help(s,i+1,k,dp,s[i])+1,help(s,i+1,k,dp,last));
        return  dp[i][last-'a']=help(s,i+1,k,dp,last);
    }
};