class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=nums.size();
        if(ans<3) return ans;
        for(int i=0;i<nums.size()-2;i++){
            int q=nums[i];
            if((q==nums[i+1])&&q==nums[i+2]){
                ans--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return ans;
    }
};