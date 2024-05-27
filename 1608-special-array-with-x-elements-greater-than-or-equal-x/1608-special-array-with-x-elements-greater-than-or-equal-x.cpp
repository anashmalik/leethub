class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size(),t=1;
        while(true){
            int c=0;
            for(const auto &x:nums){
                if(x>=t)c++;
            }
            if(c==t)return t;
            if(c<t)return -1; 
            t++;
        }
        return -1;
    }
};