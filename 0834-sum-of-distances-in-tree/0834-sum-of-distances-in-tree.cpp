class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& e) {
        map<int,vector<int>>mp;
        for(auto x:e){
            mp[x[0]].push_back(x[1]);
            mp[x[1]].push_back(x[0]);
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            vector<int>a(n,-1);
            help(mp,a,i,0);
            ans[i]=accumulate(a.begin(), a.end(),0);
        }
        return ans;
        
    }
    void help( map<int,vector<int>>&mp, vector<int>&a,int i,int t){
        if(a[i]!=-1)return;
        a[i]=t;
        for(auto x:mp[i]){
            help(mp,a,x,t+1);
        }
    }
};