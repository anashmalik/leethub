class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int l) {
        if(nums.size()==1)return 0;
        long sum=0;
        for(int i=0;i<nums.size();i++){
            long sum=nums[i];
            for(int k=i+1;k<nums.size();k++){
                sum+=nums[k];
                if((sum % l)==0)return 1;
            }
        }
        return 0;
    }
};