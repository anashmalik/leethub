class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> partition(string s) {
     vector<string>a;
     help(s,0,"",a);  
     return ans; 
    }
    void help(string &s,int i,string t,vector<string>a){
        if(i==s.size()){
            if(t=="") ans.push_back(a);
            return;
        }
        t+=s[i];
        help(s,i+1,t,a);
        if(pal(t)){
            a.push_back(t);
            help(s,i+1,"",a);
        }
       
    }
    bool pal(string a){
        int i=0,j=a.size()-1;
        while(i<=j){
            if(a[i++]!=a[j--])return 0;
        }
        return true;
    }
};