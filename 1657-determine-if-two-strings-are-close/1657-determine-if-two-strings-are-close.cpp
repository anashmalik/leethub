class Solution {
public:
    bool closeStrings(string w, string ww) {
        map<char,int>mp,mpp;
        set<int> t,tt;
        if(ww.size()!=w.size())return false;
        for(auto x:w){
            t.insert(x);
            mp[x]++;}
        for(auto x:ww){
            tt.insert(x);
            mpp[x]++;}
        vector<int>a,b;
        for(auto x:mp)a.push_back(x.second);
        for(auto x:mpp)b.push_back(x.second);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b&&t==tt;
        
    }
};