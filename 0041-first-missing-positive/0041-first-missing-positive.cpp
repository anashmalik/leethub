class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        while( i<n and nums[i]<1 )i++;
        int ans=1;
        while(i<n){
            if(ans-1==nums[i])ans--;
            else if(ans!=nums[i])return ans;
            ans++;
            i++;
        }
        return ans;
    }
};