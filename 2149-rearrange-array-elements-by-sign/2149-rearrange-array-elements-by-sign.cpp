class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>po;
        vector<int>neg;
        for(auto x:nums){
            if(x>0)po.push_back(x);
            else neg.push_back(x);
        }
        vector<int>ans;
        for(int i=0;i<po.size();i++){
            ans.push_back(po[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};