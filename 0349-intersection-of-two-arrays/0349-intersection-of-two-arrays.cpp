class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<int>v3(v1.size()+v2.size(),-1);
        set_intersection(v1.begin(),v1.end(), v2.begin(),v2.end(),v3.begin());
        set<int>s;
        for(auto x:v3){
            if(x!=-1)
            s.insert(x);}
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};