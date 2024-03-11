class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        string ans="";
        for(auto y:order){
            int t=mp[y];
            mp.erase(y);
            while(t--){
                ans+=y;
            }
        }
        for(auto y:mp){
            int t=y.second;
            
            while(t--){
                ans+=y.first;
            }
        }
        return ans;
    }
};