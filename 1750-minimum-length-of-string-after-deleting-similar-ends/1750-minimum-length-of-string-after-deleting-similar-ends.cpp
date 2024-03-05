class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size();
        while(s[i]==s[j-1] and j-i>1){
            cout<<i<<" "<<j-1<<endl;
            char t=s[i];
            while(s[i]==t and i<j)i++;
            while(s[j-1]==t and i<j)j--;
        }
       // if(i==j)return 1;
        return j-i;
    }
};