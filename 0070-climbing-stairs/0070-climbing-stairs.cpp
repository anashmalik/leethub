class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=1,sum=0;
    for(int i=0;i<n;i++){
        b=a+b;
        a=b-a;
        
    }
    return b;
    }
};