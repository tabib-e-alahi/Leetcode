class Solution {
public:
    vector<int> v;
    void convert_to_vector(TreeNode* root) {
        if (root == NULL)
            return;
        convert_to_vector(root->left);
        if (root)
            v.push_back(root->val);
        convert_to_vector(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        convert_to_vector(root);
        int min_diff = INT_MAX;
        for (int i = 1; i < v.size(); i++) {
            min_diff = min(min_diff, (v[i] - v[i - 1]));
        }
        return min_diff;
    }
};