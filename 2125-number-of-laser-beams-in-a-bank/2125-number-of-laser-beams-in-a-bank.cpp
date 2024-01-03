class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
         int a=0,b=0;
        for(auto& x:bank){
            int t=0;
            for(auto const & y:x){
                if(y=='1')t++;
            }
            if(t){
                a+=(b*t);
                b=t;
            }
        }
        return a;
        
    }
};