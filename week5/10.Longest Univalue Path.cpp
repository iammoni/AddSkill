 int ans=0;
    int dfs(TreeNode* root){
        if(!root) return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        int left_count=0,right_count=0;
        if(root->left!=NULL && root->left->val==root->val) left_count=left+1;
        if(root->right!=NULL && root->right->val==root->val) right_count=right+1;
        ans=max(ans,left_count+right_count);
        return max(left_count,right_count);
    }
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return ans;
    }