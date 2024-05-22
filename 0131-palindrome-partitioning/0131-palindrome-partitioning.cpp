class Solution {
public:
vector<vector<string>>ans;
    vector<vector<string>> partition(string s) {
        vector<vector<int>>d(s.size(),vector<int>(s.size(),0));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                d[i][j]=pal(s,i,j);
            }
        }
        vector<string>a;
        help(s,0,a,d);
        return ans;
    }
    int pal(string &s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--])return 0;
        }
        return 1;
    }
    void help(const string &s,int i, vector<string>&a, vector<vector<int>>&d){
        if(s.size()==i){
            ans.push_back(a);
        }
        else{
            for(int j=i;j<s.size();j++){
                if(d[i][j]){
                    a.push_back(s.substr(i,j-i+1));
                    help(s,j+1,a,d);
                    a.erase(a.end()-1);
                }
            }
        }
    }
};