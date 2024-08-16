class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j){
                    ans=max(ans,abs(arr[i][0]-arr[j][arr[j].size()-1]));
                }
            }
        }
        return ans;
    }
};