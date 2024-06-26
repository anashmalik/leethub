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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>a;
        help(root,a);
        int m= a.size()/2;
        TreeNode* r= new TreeNode(a[m]);
        int t=m+1;
        TreeNode* l=r;
        while(m--){
            TreeNode* te= new TreeNode(a[m]);
            l->left=te;
            l=te;
        }
         l=r;
        while(t<a.size()){
            TreeNode* te= new TreeNode(a[t++]);
            l->right=te;
            l=te;
        }
        return r;
    }
    void help(TreeNode* root,vector<int>&a)
    {
        if(!root)return;
        help(root->left,a);
        a.push_back(root->val);
        help(root->right,a);
    }
};