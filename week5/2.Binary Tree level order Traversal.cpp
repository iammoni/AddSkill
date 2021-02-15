map<int,vector<int>> v;
    void level(TreeNode* root,int l){
        if(!root) return;
        v[l].push_back(root->val);
        level(root->left,l+1);
        level(root->right,l+1);
        return;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        if(!root) return vec;
        level(root,0);
        for(auto x:v){
            vec.push_back(x.second);
            // for(int i:x.second){
            //     cout<<i<<" ";
            // }
        }
          return vec;
    }