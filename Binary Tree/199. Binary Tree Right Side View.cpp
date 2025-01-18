class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        bool freq[1000] = {false};
        queue<pair<TreeNode*, int>> q;
        if(root)
            q.push({root,1});

        while(!q.empty()){
            pair<TreeNode*, int> parent = q.front();
            q.pop();

            TreeNode* node = parent.first;
            int lvl = parent.second;

            if(freq[lvl] == false){
                v.push_back(node->val);
                freq[lvl] = true;
            }
            if(node->right){
                q.push({node->right, lvl+1});
            }
            if(node->left){
                q.push({node->left, lvl+1});
            }
        }
        return v;
    }
};