class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>mp;
     vector<vector<string>> ans;
     for(auto x:strs){
         string g=x;
         sort(g.begin(),g.end());
         mp[g].push_back(x);
     }  
     for(auto x:mp){
         ans.push_back(x.second);
     }
    return ans;
    }
};