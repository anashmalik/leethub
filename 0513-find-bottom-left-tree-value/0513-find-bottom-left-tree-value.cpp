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
    int findBottomLeftValue(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>a;
        a.push(root);
        int p;
        while(!a.empty()){
            TreeNode* temp=a.front();
            a.pop();
            ans.push_back(temp->val);
            if(temp->right)a.push(temp->right);
            if(temp->left)a.push(temp->left);
        }

        return ans[ans.size()-1];
    }
};