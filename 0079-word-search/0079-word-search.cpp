class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(help(i,j,board,word,0))return true;
            }
        }
        return false;
    }
    int help(int i,int j,vector<vector<char>> b,string w,int k){
        if(k==w.size())return true;
        if(i<0 or j<0 or i>=b.size() or j>=b[0].size())return false;
        if(b[i][j]!=w[k])return false;
        b[i][j]='1';
        bool ans=false;
        ans =ans or help(i+1,j,b,w,k+1);
        ans =ans or help(i,j+1,b,w,k+1);
        ans =ans or help(i-1,j,b,w,k+1);
        ans =ans or help(i,j-1,b,w,k+1);
        return ans;
    }
};