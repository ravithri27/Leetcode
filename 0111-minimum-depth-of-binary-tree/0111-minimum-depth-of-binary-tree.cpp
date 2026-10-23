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
    int minDepth(TreeNode* root) {
       if(root==nullptr)return 0;
       queue<TreeNode*> q;
       TreeNode* curr=root;
       q.push(curr);
       int height=0;
       while(!q.empty()){
            int size=q.size();
            height++;
            for(int i=0;i<size;i++){
                curr=q.front();
                q.pop();
                if(curr->left==nullptr&&curr->right==nullptr){
                    return height;
                }
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
       }
       return height;
    }
};