class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int re=abs(sum%k);
            int t=mp[re];
            // cout<<t<<endl;
            ans+=t;
            mp[re]++;
        }
      
        //  for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        return ans;
    }
};