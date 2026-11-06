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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        queue<TreeNode*> l,r;
        l.push(root);
        r.push(root);
        int check=true;
        while(!l.empty()&&!r.empty()){
            int size=l.size();
            for(int i=0;i<size;i++){
                TreeNode *curr1=l.front();
                TreeNode *curr2=r.front();
                l.pop();
                r.pop();
                if(curr1->left!=nullptr){
                    l.push(curr1->left);
                }

                if(curr2->right!=nullptr){
                    r.push(curr2->right);
                }

                if(!l.empty()&&!r.empty()&&l.front()->val!=r.front()->val||l.size()!=r.size()){
                    check=false;
                    break;
                }

                if(curr1->right!=nullptr){
                    l.push(curr1->right);
                }

                if(curr2->left!=nullptr){
                    r.push(curr2->left);
                }

                if(!l.empty()&&!r.empty()&&l.front()->val!=r.front()->val||l.size()!=r.size()){
                    check=false;
                    break;
                }
        
            }
        }
        return check;
    }
};