class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)return false;
        long int a=1;
        while(a<n){
            a*=2;
        }
        return a==n;
    }
};