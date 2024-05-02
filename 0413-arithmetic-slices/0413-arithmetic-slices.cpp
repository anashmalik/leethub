class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int a=0,ans=0,n=nums.size();
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                a+=1;
                ans+=a;
            }
            else a=0;
        }
        return ans;
    }
};