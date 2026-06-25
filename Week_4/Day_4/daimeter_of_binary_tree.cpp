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
    int diameterOfBinaryTree(TreeNode* root) {
        int daimeter=0;
        checkheight(root,daimeter);
        return daimeter;
    }
    int checkheight(TreeNode* root, int& daimeter){
        if(root==NULL){
            return 0;
        }
        int left_height=checkheight(root->left,daimeter);
        int right_height=checkheight(root->right,daimeter);
        daimeter=max(daimeter,left_height+right_height);
        return 1+max(left_height,right_height);
    }
};
