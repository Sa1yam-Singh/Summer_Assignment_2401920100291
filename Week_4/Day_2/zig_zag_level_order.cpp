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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> qt;
        qt.push(root);
        bool ltoR=true;
        while(!qt.empty()){
            int s=qt.size();
            vector<int> lvl(s);
            for(int i=0;i<s;i++){
                TreeNode* node=qt.front();
                qt.pop();
                int index;
                if(ltoR){
                    index=i;
                }
                else{
                    index=s-1-i;
                }
                lvl[index]=node->val;
                if(node->left!=NULL){
                    qt.push(node->left);
                }
                if(node->right!=NULL){
                    qt.push(node->right);
                }
            }
            ltoR=!ltoR;
            result.push_back(lvl);
        }
        return result;
    }
};
