class Solution {
public:
    TreeNode* convert_array_to_bst(vector<int>& v, int n, int l, int r){
        if(l > r){
            return NULL;
        }
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(v[mid]);
        TreeNode* leftroot = convert_array_to_bst(v, n, l, mid-1);
        TreeNode* rightroot = convert_array_to_bst(v, n, mid+1, r);

        root->left = leftroot;
        root->right = rightroot;

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = convert_array_to_bst(nums,nums.size(), 0, nums.size()-1);
        return root;
    }
};