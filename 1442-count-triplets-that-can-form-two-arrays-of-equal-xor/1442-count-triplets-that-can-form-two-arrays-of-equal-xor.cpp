class Solution {
public:
    int countTriplets(vector<int>& arr) {
        if(arr.size()==1)return 0;
        vector<vector<int>>a(arr.size(),vector<int>(arr.size(),0));
        for(int i=0;i<arr.size();i++){
            int t=arr[i];
            a[i][i]=arr[i];
            for(int j=i+1;j<arr.size();j++){
                t= t xor arr[j];
                a[i][j]=t;
            }
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int t=a[i][j];
                for(int k= j+1;k<arr.size();k++){
                    if(t==a[j+1][k])ans++;
                }
            }

        }
       
        return ans;
    }
};