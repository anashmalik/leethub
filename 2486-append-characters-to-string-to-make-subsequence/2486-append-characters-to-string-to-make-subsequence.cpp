class Solution {
public:
    int appendCharacters(string s, string t) {
        int l=0;
        for(int i=0;i<s.size() and l<t.size();i++){
            if(s[i]==t[l])l++;
           
        }
        return t.size()-l;
    }
};