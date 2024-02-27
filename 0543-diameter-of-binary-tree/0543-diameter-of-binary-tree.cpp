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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        int s=help(root,ans);
        return ans;
    }
    int help(TreeNode* root,int &ans){
        if(!root)return -1;
       int  a=help(root->left,ans)+1;
       int b=help(root->right,ans)+1;
        ans=max(ans,a+b);
        return max(a,b);
    }
};