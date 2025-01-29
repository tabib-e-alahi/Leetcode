class Solution {
public:
    vector<int> v;


    void convert_to_vector(TreeNode* root) {
        if (root == NULL)
            return;
        v.push_back(root->val);    
        convert_to_vector(root->left);
        convert_to_vector(root->right);
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if (root == NULL)
            return sum;
        convert_to_vector(root);
        for(int x: v){
            if(x >= low && x <= high){
                sum += x;
            }
        }
        return sum;
    }
};