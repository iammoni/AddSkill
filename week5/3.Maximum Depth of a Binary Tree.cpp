int maxDepth(TreeNode* root,int level=0) {
        if(!root) return level;
       return  max(maxDepth(root->left,level+1),maxDepth(root->right,level+1));
    }