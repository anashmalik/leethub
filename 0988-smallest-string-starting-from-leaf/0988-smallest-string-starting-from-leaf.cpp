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
    string smallestFromLeaf(TreeNode* root) {
        if(!root)return "";
        string a="",b(8600,'z'),c;
       
       if(root->left) b=smallestFromLeaf(root->left);
        if(root->right){
            c=smallestFromLeaf(root->right);
            //cout<<c<<" ";
            b=(b<=c)?b:c;
        }
       // cout<<b.size()<<"--";
        a+=(b.size()==8600)?"":b;
        a+=('a'+root->val);
        return a;
    }
};