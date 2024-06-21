class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int ans=0,l=0,k=0,t=0,a=0;
        for(int i=0;i<c.size();i++){
            k++;
            if(!g[i]){
                // cout<<c[i]<<endl;
                ans+=c[i];
               
            }
            else{
                a+=c[i];
               
                while(k>m){
                    //  cout<<a<<" "<<g[l]<<" "<<k<<endl;
                    if(g[l]==1){
                        a-=c[l];
                    }
                    k--;
                    l++;

                }
                // cout<<a<<" "<<l<<endl;
                t=max(t,a);
            }
            
        }
         while(k>m){
                    if(g[l]){
                        a-=c[l];
                    }
                   k--;
                    l++;

                }
         t=max(t,a);
        // cout<<ans<<" "<<t;
        return ans+t;
    }
};