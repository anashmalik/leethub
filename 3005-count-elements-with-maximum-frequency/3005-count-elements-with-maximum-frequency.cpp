class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int a=0,ans=0;
        for(auto x:nums)mp[x]++;
        for(auto y:mp)a=max(a,y.second);
        for(auto y:mp)ans+=((a==y.second)?a:0);
        return ans;
    }
};