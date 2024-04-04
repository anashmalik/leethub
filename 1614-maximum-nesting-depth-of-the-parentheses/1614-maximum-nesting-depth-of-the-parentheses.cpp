class Solution {
public:
    int maxDepth(string s) {
        int n=s.size(),t=0,a=0,ans=0;
       for(int i=0;i<n;i++){
        if(s[i]=='(')t++;
        else if(s[i]==')')t--;
           ans=max(ans,t);
        }
       return ans;
    }
};