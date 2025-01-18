class Solution {
public:
    void BinaryTreeLeafNodes(TreeNode* root, vector<int> &v){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return;
        }
        BinaryTreeLeafNodes(root->left, v);
        BinaryTreeLeafNodes(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        BinaryTreeLeafNodes(root1, v1);
        vector<int> v2;
        BinaryTreeLeafNodes(root2, v2);

        return v1 == v2;
    }
};