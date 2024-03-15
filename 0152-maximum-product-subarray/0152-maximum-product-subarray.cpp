class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int l=1,r=1;
        for(int i=0;i<n;i++){
            l*=nums[i];
            r*=nums[n-i-1];
            ans=max(ans,max(l,r));
            l=(l==0)?1:l;
            r=(r==0)?1:r;
        }
        return ans;
    }
};