class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                a.push_back(abs(nums[i]-nums[j]));
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};