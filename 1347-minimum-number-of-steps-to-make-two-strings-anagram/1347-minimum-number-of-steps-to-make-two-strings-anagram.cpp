class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        map<char,int>mp;
        for(auto &x:t)mp[x]++;
        for(auto &x:s)mp[x]--;
        for(auto x:mp){
            if(x.second>0)ans+=x.second;
           // cout<<ans;
        }
        return ans;
    }
};