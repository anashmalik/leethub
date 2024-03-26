class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size();
        while( i<n and nums[i]<1 )i++;
        int ans=1;
        while(i<n){
            if(ans!=nums[i++])return ans;
            ans++;
        }
        return ans;
    }
};