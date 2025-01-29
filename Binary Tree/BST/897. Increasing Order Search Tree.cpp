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
    TreeNode* convert_to_bst(vector<int> vec, int n, int l, int r){
        if(l > r)
            return NULL;
        int mid = l;
        TreeNode* root = new TreeNode(vec[mid]);   
        TreeNode* rightRoot = convert_to_bst(vec, n, mid+1, r);

        root->right = rightRoot;
        return root;    
    }
    TreeNode* increasingBST(TreeNode* root) {
        convert_to_vector(root);
        TreeNode* newRoot = convert_to_bst(v, v.size(), 0, v.size()-1);

        return newRoot;
    }
};