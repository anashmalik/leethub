class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>v(s.size(),0);
        for(int i=0;i<s.size();i++){
            v[i]=abs(s[i]-t[i]);
        }
        int j=0,su=0,ans=0;
        for(int i=0;i<s.size();i++){
            su+=v[i];
            if(su<=maxCost)ans=max(ans,i-j+1);
            while(su>maxCost){
                su-=v[j++];
            }
        }
        return ans;
    }
};