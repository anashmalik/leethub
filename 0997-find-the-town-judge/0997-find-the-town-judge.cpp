class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int> a(n+1,0),b(n+1,0);

        for(auto x:trust){
           a[x[0]]++;
           b[x[1]]++;
        }
        int t=n;
        while(n){
            if(a[n]==0 and b[n]==t-1)return n;
            n--;
        }
        return -1;
    }
};