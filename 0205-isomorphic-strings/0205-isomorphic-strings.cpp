class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>mp;
       unordered_set<char>a;
        // int a=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]=t[i];
                a.insert(t[i]);
            }
             else {if(mp[s[i]]!=t[i])return false;}
        }
       // cout<<mp.size()<<" "<<a;
return (a.size()==mp.size())?true:false;
    }
};