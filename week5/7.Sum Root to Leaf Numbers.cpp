 int ans=0;
    void dfs(TreeNode* root,int res){
        if(!root) return;
        if(root->left==NULL && root->right==NULL){ ans+=res*10+root->val; return;}
        
        dfs(root->left,res*10+root->val);
        dfs(root->right,res*10+root->val);
     
    }
    int sumNumbers(TreeNode* root,int res=0) {
        dfs(root,0);
        return ans;
    }