/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string st="",en="";
    string getDirections(TreeNode* root, int s, int d) {
        help(root,s,d,"");
        // int i=0;
        while(st.size() and en.size() and st[0]==en[0]){
            st.erase(st.begin());
            en.erase(en.begin());
        }
        for(int i=0;i<st.size();i++)st[i]='U';
        return st+en;
    }
    void help(TreeNode* root, int s, int d,string v){
        if(!root)return;
        if(root->val==s)st=v;
        if(root->val==d)en=v;
        help(root->left,s,d,v+'L');
        help(root->right,s,d,v+'R');
    }
};