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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
     vector<int>a,b;
     help(root1,a);
     help(root2,b);
     return a==b;   
    }
    void help(TreeNode* r,vector<int>&ans){
        if(r==NULL)return;
        help(r->left,ans);
        if(r->left==NULL&&r->right==NULL)ans.push_back(r->val);
        help(r->right,ans);
    }
};