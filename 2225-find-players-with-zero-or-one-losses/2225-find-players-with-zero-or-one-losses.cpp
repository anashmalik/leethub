class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& ma) {
        map<int,int>mp;
        vector<vector<int>> ans(2);
        for(auto x:ma){
            mp[x[0]]=0;
            mp[x[1]]=0;
        }
         for(auto x:ma){
            mp[x[1]]++;
        }
        for(auto x:mp){
           if(x.second==0){
               ans[0].push_back(x.first);
           }
           if(x.second==1) ans[1].push_back(x.first);
        }
        return ans;
    }
};