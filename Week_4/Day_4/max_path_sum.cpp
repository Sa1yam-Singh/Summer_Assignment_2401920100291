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
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        checkheight(root, sum);
        return sum;
    }
    int checkheight(TreeNode* root, int &sum) {
        if (!root) {
            return 0;
        }
        int left_gain = max(0, checkheight(root->left, sum));
        int right_gain = max(0, checkheight(root->right, sum));
        sum = max(sum, root->val + left_gain + right_gain);
        return root->val + max(left_gain, right_gain);
    }
};
