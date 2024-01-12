class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(),i,t=0,y=0;
        for( i=0;i<n/2;i++){
            char x=s[i];
            if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
                cout<<x<<" ";
                t++;}
        }
       for(i;i<n;i++){
        char x=s[i];
            if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
                cout<<x<<" ";
                y++;}
       }
       return t==y;
    }
};