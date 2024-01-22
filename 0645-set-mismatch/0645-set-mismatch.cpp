class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n,0);
        for(int i=0;i<n;i++){
            a[nums[i]-1]++;
        }
        vector<int>ans(2);
        for(int i=0;i<n;i++){
            if(a[i]==0)ans[1]=i+1;
            if(a[i]==2)ans[0]=i+1;
        }
        return ans;
    }
};