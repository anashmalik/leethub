class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans(n,0);
        for(int i=n-2;i>=0;i--){
            if(temp[i]<temp[i+1])ans[i]=1;
            else{
                int t=i+1;
                while(ans[t]!=0 and temp[i]>=temp[t]){
                    t+=ans[t];
                }
                if(temp[i]<temp[t])ans[i]=t-i;
                else ans[i]=0;
            }
        }
       return ans; 
    }
};