class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        g.push_back(INT_MAX);
        s.push_back(INT_MIN);
        int i=0,j=0,ans=0;
        for(auto x:g)
        while(i<g.size()&&j<s.size()){
          //  cout<<g[i]<<" "<<s[j]<<endl;
            if(g[i]<=s[j]){
            ans++;
            i++;
            j++;
            }
            else j++;


        }
        return ans;
    }
};