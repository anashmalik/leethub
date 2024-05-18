class Solution {
public:
int ans=0;
    int distributeCoins(TreeNode* root) {
       int t= help(root);
        return ans;
    }
    int help(TreeNode* root){
        if(!root)return 0;
        int a=help(root->left);
        int b=help(root->right);
        ans+=(abs(a)+abs(b));
        return root->val+a+b-1;
    }
};