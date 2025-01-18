
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        if (root->left && root->left->val != root->val) {
            return false;
        }

        if (root->right && root->right->val != root->val) {
            return false;
        }
        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);

        return l&&r;
    }
};