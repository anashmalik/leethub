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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>ans;
        help(root,ans);
        int a=0;
        for(auto x:ans){
            if(x>=low&&x<=high){
                a+=x;
            }
        }
        return a;
    }
    void help(TreeNode*r,vector<int>&ans){
        if(r==NULL)return;
        help(r->left,ans);
        ans.push_back(r->val);
        help(r->right,ans);
    }
};