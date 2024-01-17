class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto x:arr)mp[x]++;
        set<int>s;
        for(auto x:mp)s.insert(x.second);
        return mp.size()==s.size();
    }
};