class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& e) {
        int a=0,b=0;
        for(auto x:e){
            if(x[0]==1)a+=2;
            if(x[0]==2)b+=2;
            if(x[0]==3){
                a+=2;
                b+=2;
            }
        }
        cout<<a<<" "<<b;
        if(a-2*(n-1)<0 or (b-2*(n-1))<0)return -1;

        return ((a-2*(n-1))+(b-2*(n-1)))/2;
    }
};