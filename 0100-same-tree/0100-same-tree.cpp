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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr){
            return true;
        }
        if(p==nullptr)return false;
        if(q==nullptr)return false;
        if(p->val!=q->val){
            return false;
        }
        queue<TreeNode*> q1,q2;
        q1.push(p);
        q2.push(q);
        bool check=true;
        while(!q1.empty()&&!q2.empty()){
            int size=q1.size();
            for(int i=0;i<size;i++){
                TreeNode* curr1=q1.front();
                TreeNode* curr2=q2.front();
                q1.pop();
                q2.pop();
                if(curr1->left!=nullptr){
                    q1.push(curr1->left);
                }
                if(curr2->left!=nullptr){
                    q2.push(curr2->left);
                }
                if((!q1.empty()&&!q2.empty()&&q1.front()->val!=q2.front()->val)||q1.size()!=q2.size()){
                    check=false;
                    break;
                }
                if(curr1->right!=nullptr){
                    q1.push(curr1->right);
                }
                if(curr2->right!=nullptr){
                    q2.push(curr2->right);
                }
                if((!q1.empty()&&!q2.empty()&&q1.front()->val!=q2.front()->val)||q1.size()!=q2.size()){
                    check=false;
                    break;
                }
            }
        }
        return check;
    }
};