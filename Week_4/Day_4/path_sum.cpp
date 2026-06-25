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
    int target;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        return check(root,0);
    }
    bool check(TreeNode* root,int sum){
        if(root==NULL){
            return false;
        }
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            return sum==target;
        }
        bool left_ans=check(root->left,sum);
        bool right_ans=check(root->right,sum);
        return left_ans || right_ans;
    }
};
