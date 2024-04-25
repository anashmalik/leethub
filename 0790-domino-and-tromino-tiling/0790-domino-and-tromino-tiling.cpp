class Solution {
public:
int mod = 1e9+7;
    int numTilings(int n) {
        long ans=0,a=0,b=1,c=1;
        if(n==1)return 1;
        for(int i=2;i<=n;i++){
            ans=(2*c+a)%mod;
            a=b;
            b=c;
            c=ans;
        }
        return ans;
    }
};