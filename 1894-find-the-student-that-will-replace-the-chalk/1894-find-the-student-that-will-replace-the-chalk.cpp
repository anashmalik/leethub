class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
        int sum=accumulate(c.begin(),c.end(),0);
        int t=k%sum;
        for(int i=0;i<c.size();i++){
            if(t<c[i])return i;
            t-=c[i];
        }
        return 0;
    }
};