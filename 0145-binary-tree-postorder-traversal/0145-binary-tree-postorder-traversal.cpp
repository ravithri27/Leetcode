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
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==nullptr)return {};
        stack<TreeNode*> st1,st2;
        vector<int> ans;
        TreeNode* curr=root;
        st1.push(root);
        while(!st1.empty()){
            curr=st1.top();
            st2.push(curr);
            st1.pop();
            if(curr->left!=nullptr){
                st1.push(curr->left);
            }
            if(curr->right!=nullptr){
                st1.push(curr->right);
            }
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};