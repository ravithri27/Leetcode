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
    int max(int a,int b){
        if(a>b)return a;
        return b;
    }
    int height(TreeNode *root){
        if(root==nullptr){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return max(left,right)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int left=height(q.front()->left);
            int right=height(q.front()->right);
            if(abs(left-right)>1){
                return false;
            }
            if(q.front()->left!=nullptr){
                q.push(q.front()->left);
            }
            if(q.front()->right!=nullptr){
                q.push(q.front()->right);
            }
            q.pop();
        }
        return true;
    }
};