class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int nn) {
        int i=0,j=0;
        vector<int> n;
        n=nums1;
        nums1.clear();
        while((i<m)&&j<nn){
            if(n[i]<nums2[j]){
                nums1.push_back(n[i]);
                i++;
            }
            else{
                nums1.push_back(nums2[j]);
                j++;
            }
        }
        
    for(i;i<m;i++){
        nums1.push_back(n[i]);
    }
    for(j;j<nn;j++){
        nums1.push_back(nums2[j]);
                
    }
    }
};