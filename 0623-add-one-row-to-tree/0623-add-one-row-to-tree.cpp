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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
             TreeNode* r=new TreeNode(val,root,NULL);
                return r;
        }
        help(root,val,depth-1);
        return root;
    }
    void help(TreeNode* root, int& val, int depth){
        if(!root)return;
        if(depth==1){
                TreeNode* r=new TreeNode(val,root->left,NULL);
                root->left=r;
                TreeNode* rr=new TreeNode(val,NULL,root->right);
                root->right=rr;
        }
        help(root->left,val,depth-1);
        help(root->right,val,depth-1);
    }
};