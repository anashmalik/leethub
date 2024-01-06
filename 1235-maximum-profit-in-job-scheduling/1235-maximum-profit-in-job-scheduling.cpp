class Solution {
public:
    int jobScheduling(vector<int>& st, vector<int>& et, vector<int>& p) {
        int t=0;
        int n=st.size();
        vector<tuple<int,int,int>>job(n);
        for(int i=0;i<n;i++){
            job[i]={et[i],st[i],p[i]};
        }
        sort(job.begin(),job.end());
        vector<int>dp(n+1);
        for(int i=0;i<n;i++){
            auto [e,s,p]=job[i];
            int ni=upper_bound(job.begin(),job.begin()+i,s,[&](int time ,const auto &j)->bool{
                return time<get<0>(j);
            })-job.begin();
            dp[i+1]=max(dp[i],dp[ni]+p);
        }
        return dp[n];
    }
   
};