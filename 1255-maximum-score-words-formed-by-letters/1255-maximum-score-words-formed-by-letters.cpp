class Solution {
public:
    int maxScoreWords(vector<string>& w, vector<char>& l, vector<int>& s) {
        map<char,int>mp;
        for(auto x:l)mp[x]++;
       return help(w,mp,s,0);
    }
    int help(vector<string>& w, map<char,int>mp, vector<int>& s,int i){
        if(w.size()==i)return 0;
        int t=help(w,mp,s,i+1);
        int y=0;
        for(auto x:w[i]){
            mp[x]--;
            y+=s[x-'a'];
            if(mp[x]<0)return t;
        }
        int o=help(w,mp,s,i+1);
        t=max(t,o+y);
        return t;
    }
};