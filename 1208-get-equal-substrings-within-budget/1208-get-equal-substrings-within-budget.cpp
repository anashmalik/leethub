class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>v(s.size(),0);
        for(int i=0;i<s.size();i++){
            v[i]=abs(s[i]-t[i]);
        }
        int j=0,s=0,ans=0;
        for(int i=0;i<s.size();i++){
            s+=v[i];
            if(s<=maxCost)ans=max(ans,i-j+1);
            while(s>maxCost){
                s-=v[j++];
            }
        }
        return ans;
    }
};