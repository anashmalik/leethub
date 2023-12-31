class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int t=-1;
        for(int i=0;i<s.size();i++){
            for(int j=s.size()-1;j>i;j--){
                if(s[i]==s[j]){ t=max(t,j-i-1);
                break;}
            }
        }
        return t;
    }
};