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
    void invert(TreeNode* root,TreeNode* newnode){
        if(root==nullptr){
            return;
        }
        if(root->left!=nullptr){
            newnode->right=new TreeNode(root->left->val);
        }
        if(root->right!=nullptr){
            newnode->left=new TreeNode(root->right->val);
        }
        invert(root->left,newnode->right);
        invert(root->right,newnode->left);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return nullptr;
        }
        TreeNode* newnode = new TreeNode(root->val);
        invert(root,newnode);
        return newnode;
    }
};