/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }
    TreeNode* deserialize(string data) {
        vector<string> nodes;
        stringstream ss(data);
        string token;
        while (getline(ss, token, ',')) {
            nodes.push_back(token);
        }
        int index = 0;
        return build(nodes, index);
    }
    TreeNode* build(vector<string>& nodes, int& index) {
        if (nodes[index] == "#") {
            index++;
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(nodes[index++]));
        root->left = build(nodes, index);
        root->right = build(nodes, index);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
