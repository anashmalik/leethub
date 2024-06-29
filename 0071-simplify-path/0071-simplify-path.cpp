class Solution {
public:
    string simplifyPath(string path) {
     if(path[0]!='/')path.insert(path.begin(),'/');
     int l=0;
     for(int i=0;i<path.size();i++){
        cout<<path<<" "<<i<<endl;
        if(path[i]=='/'){
            if(i+1<path.size() and path[i+1]=='/'){path.erase(i,1);
            l=i;
             i=max(-1,i-2);}
             else if(i+3<path.size() and path[i+1]=='.' and path[i+2]=='.' and path[i+3]=='/'){
                    l=help(path,i);
                    path.erase(l,i-l+3);
                    i=l-1;
             }
             else l=i;
        }
        else if(path[i]=='.'){
             if(i+2<path.size() and path[i+1]=='.' and path[i+2]=='.')i+=2;
             else if(i+1<path.size() and path[i+1]=='.' ){
                path.erase(i,2);
                i=max(-1,i-3);
             }
             else {
                path.erase(i,1);
             i=max(-1,i-2);}
        }
     }
     if(path[path.size()-1]=='/')path.erase(path.size()-1,1);
     return (path.size())? path:"/";
    }
    int help(string &p,int i){
        while(i--){
            if(p[i]=='/')return i;
        }
        return 0;
    }
};