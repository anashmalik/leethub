class Solution {
public:
    int helper(vector<int>& nums, int k) {
        if (nums.size() <= 1) return nums.size()+1;
       
        vector<int> s;
        int x = nums[nums.size()-1] - k;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != x) {
                s.push_back(nums[i]);
            }
        }
        nums.pop_back();
        if (nums.size() == s.size()) {
            return helper(nums, k) * 2;
        } else {
            return helper(nums, k) + helper(s, k);
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return helper(nums, k) - 1;
    }
};