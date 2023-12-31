class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int u=0;u<nums.size();u++){
            if(nums[u]!=val){
                ans++;
            }
            else{
                nums.erase(nums.begin()+u);
                u--;
            }
        }
        return ans;
    }
};