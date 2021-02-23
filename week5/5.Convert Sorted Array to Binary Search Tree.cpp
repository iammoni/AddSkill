TreeNode* ans=NULL;
    TreeNode* insert(TreeNode* root,int k){
        if(!root) return new TreeNode(k);
        if(root->val>k) root->left=insert(root->left,k);
        else root->right=insert(root->right,k);
        return root;
    }
    void fun(vector<int>& nums,int low,int high){
        if(low>high) return;   
        int mid=low+(high-low)/2;
        ans=insert(ans,nums[mid]);
          //cout<<nums[mid]<<" ";
          fun(nums,low,mid-1);
          fun(nums,mid+1,high);
            
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        fun(nums,0,nums.size()-1);
        return ans;
    }