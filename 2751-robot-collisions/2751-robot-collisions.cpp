class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        
        int l=0,r=0;
        for(auto x:d ){
            if(x=='L')l++;
            else r++;
        }
        if(l==0 or r==0)return h;
        vector<pair<int,pair<char,pair<int,int>>>>pa;
        for(int i=0;i<p.size();i++){
            pa.push_back({p[i],{d[i],{i,h[i]}}});
        }
        sort(pa.begin(),pa.end());
        // for(auto x:pa)cout<<x.first<<endl;
        int f=1;
        for(int i=1;i<pa.size();i++){
            cout<<i<<" "<<pa.size()<<endl;
            if(pa[i-1].second.first=='R' and pa[i].second.first=='L' and f){
                if(pa[i-1].second.second.second<pa[i].second.second.second){
                    pa[i].second.second.second--;
                    pa.erase(pa.begin()+i-1);
                    i=max(0,i-2);
                    // cout<<"rtyui";
                }
                else if(pa[i-1].second.second.second>pa[i].second.second.second){
                    pa[i-1].second.second.second--;
                    pa.erase(pa.begin()+i);
                    i=max(0,i-2);
                    // cout<<"hgjhg";
                }
                else{
                     pa.erase(pa.begin()+i-1);
                     pa.erase(pa.begin()+i-1);
                    i=max(0,i-2);
                    // cout<<"===="<<i<<pa.size();
                    // f=0;
                }
            }
        }
        vector<pair<int,int>>dd;
        for(auto x:pa){
            dd.push_back(x.second.second);
        }
        sort(dd.begin(),dd.end());
        h.clear();
        for(auto x:dd)h.push_back(x.second);
        return h;
    }
};