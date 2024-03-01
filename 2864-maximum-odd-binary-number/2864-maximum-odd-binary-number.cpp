class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a,b;
        a=b=0;
        for(auto x:s){
            if(x=='1')a++;
            else b++;
        }
        for(int i=0;i<s.size();i++){
            if(a>1){s[i]='1';
            a--;}
            else s[i]='0';
        }
        s[s.size()-1]='1';
        return s;
    }
};