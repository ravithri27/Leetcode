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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr)return {};
        stack<TreeNode*> st;
        vector<int> ans;
        TreeNode* curr=root;
        st.push(curr);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right!=nullptr){
                st.push(curr->right);
            }
            if(curr->left!=nullptr){
                st.push(curr->left);
            }
        }
        return ans;
    }
};