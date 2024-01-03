class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inv, vector<int>& ni) {
        int m=inv.size(),i;
        if(inv.size()==0){inv.insert(inv.begin(),ni);
        return inv; }
        if(ni[0]>inv[inv.size()-1][1]){
            inv.push_back(ni);
            return inv; 
            }

         vector<vector<int>> ans;
        for( i=0;i<m;i++){
            if(inv[i][0]<=ni[0]&& inv[i][1]>=ni[1])return inv;
            if(inv[i][1]<ni[0])ans.push_back(inv[i]);
            else{
               if(inv[i][0]<=ni[1])
                {inv[i][1]=max(inv[i][1],ni[1]);
                inv[i][0]=min(inv[i][0],ni[0]);
                int j=i+1;
                while(j<m&& inv[j][0]<=inv[i][1]){
                    inv[i][1]=max(inv[i][1],inv[j][1]);
                    j++;
                }
                    ans.push_back(inv[i]);
                    i=j;
                    }
                else {
                    inv.insert(inv.begin()+i,ni);
        return inv;
                }

                break;
            }
        }
        for(i;i<m;i++)ans.push_back(inv[i]);
        return ans;
    }
};