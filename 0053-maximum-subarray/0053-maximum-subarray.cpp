class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int l=0,r=0,n=nums.size();
        for(int i=0;i<n;i++){
           l+=nums[i];
           r+=nums[n-1-i];
           ans=max(ans,max(l,r));
           l=(l<0)?0:l;
           r=(r<0)?0:r;
        }
        return ans;
        
    }
    
};