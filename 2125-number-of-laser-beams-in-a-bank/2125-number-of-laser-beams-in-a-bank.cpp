class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        for(auto x:bank){
            int t=0;
            for(auto y:x){
                if(y=='1')t++;
            }
            if(t)ans.push_back(t);
        }
        if(ans.size()<2)return 0;
        int a=0;
        for(int i=0;i<ans.size()-1;i++){
            a+=ans[i]*ans[i+1];
        }
        return a;
        
    }
};