void fun(TreeNode* root,vector<int>&res){
        if(!root) return;
        fun(root->left,res);
        res.push_back(root->val);
        fun(root->right,res);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> left;//,right,ans;
        fun(root1,left);
        fun(root2,left);
        sort(left.begin(),left.end());
        return left;
    }