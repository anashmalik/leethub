class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>d(nums.size()+1,0);
        for(auto x:nums){
            if(d[x])return x;
            d[x]++;
        }
        return 0;
    }
};