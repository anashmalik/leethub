class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        int n=s.size(),i,t=0,y=0;
        for( i=0;i<n/2;i++){
            char x=s[i];
            if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'){
                cout<<x<<" ";
                t++;}
        }
       for(i;i<n;i++){
        char x=s[i];
            if(x=='a'||x=='i'||x=='e'||x=='o'||x=='u'){
                cout<<x<<" ";
                y++;}
       }
       return t==y;
    }
};