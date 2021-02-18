 map<TreeNode*,int> m;
    int rob(TreeNode* root) {
        if(!root) return 0;
        if(m.find(root)!=m.end()) return m[root];
        
        int totel=0;
        if(root->left)  totel+=rob(root->left->left)+rob(root->left->right);
        
        if(root->right) totel+=rob(root->right->left)+rob(root->right->right);
        
        return m[root]=max(root->val+totel,rob(root->left)+rob(root->right));
    }