class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        vector<int>a(100001,0);
        int ans=0,t=0;
        for(auto x:nums)a[x]++;
        for(int i=0;i<100001;i++){
            if(a[i]>1){
                t=max(t,i)+1;
                while(a[i]>1){

                    while(true){
                        // cout<<t<<endl;
                        if(t<100001 and a[t]==0){
                            a[t]=1;
                            // cout<<a[t-1];
                            ans+=t-i;
                            break;
                        }
                        t++;
                    }
                    a[i]--;
                }
            }
        }
        return ans;
    }
};