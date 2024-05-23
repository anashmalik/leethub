class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<vector<int>>>dp(2, vector<vector<int>>(n,vector<int>(n,-1)));
        vector<int>a;
       return help(nums,k,0,0,1,dp,a);
    }
    int help(vector<int>& nums, int &k,int i,int j,int f, vector<vector<vector<int>>>&dp, vector<int>&a){
        if(i==nums.size()){
           return a.size()!=0;}
        int t=0;
        t=help(nums,k,i+1,j,f,dp,a);
        for(auto x:a){
            if(abs(x-nums[i])==k)return t;
        }
        a.push_back(nums[i]);
       t+= help(nums,k,i+1,j,f,dp,a);
       a.erase(a.end()-1);
    return t;
    }
    
        
    
};