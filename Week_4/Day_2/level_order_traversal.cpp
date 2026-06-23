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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> qt;
        qt.push(root);
        while(!qt.empty()){
            int s=qt.size();
            vector<int> lvl;
            for(int i=0;i<s;i++){
                TreeNode* node=qt.front();
                qt.pop();
                if(node->left!=NULL){
                    qt.push(node->left);
                }
                if(node->right!=NULL){
                    qt.push(node->right);
                }
                lvl.push_back(node->val);
            }
            result.push_back(lvl);
        }
        return result;
    }
};
