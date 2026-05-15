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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==nullptr)return root;
        q.push(root);
        TreeNode* curr;
        while(!q.empty()){
            curr=q.front();q.pop();
            TreeNode* temp=curr->left;
            curr->left=curr->right;
            curr->right=temp;
            if(curr->left!=nullptr)q.push(curr->left);
            if(curr->right!=nullptr)q.push(curr->right);
        }
        return root;
    }
};
