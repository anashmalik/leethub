class Solution {
public:
    int numSteps(string s) {
        int ans=0;
        while(s!="1"){
            if(s[s.size()-1]=='1'){
                int i;
                for( i=s.size()-1;i>=0;i--){
                    if(s[i]=='0'){
                        s[i]='1';
                        break;
                    }
                    else s[i]='0';
                }
                if(i==-1){
                    s.insert(s.begin(),'1');
                }
            }
            else s.erase(s.end()-1);
            ans++;
        }
        return ans;
    }
};