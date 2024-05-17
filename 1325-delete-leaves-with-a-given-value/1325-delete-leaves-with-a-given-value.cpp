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
    TreeNode* removeLeafNodes(TreeNode* root, int &t) {
        if(!root)return root;
        TreeNode* l= removeLeafNodes(root->left,t);
        TreeNode* r= removeLeafNodes(root->right,t);
        if(l==NULL && r==NULL && root->val==t)return NULL;
        root->left=l;
        root->right=r;
        return root;
    }
};