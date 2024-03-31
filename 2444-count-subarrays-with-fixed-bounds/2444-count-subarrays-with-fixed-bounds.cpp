class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int a=*max_element(nums.begin()+i,nums.begin()+j+1);
                int b=*min_element(nums.begin()+i,nums.begin()+j+1);
                if(a==maxK and b==minK)ans++;
                if(a>maxK or b<minK)break;
            }
        } 
        return ans;
    }
};