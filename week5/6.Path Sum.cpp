bool total_sum(TreeNode* root,int total,int sum){
        if(root==nullptr){
            return false;
        }
        if(sum==total+root->val &&  root->left==nullptr && root->right==nullptr)
            return true;
        
       return (total_sum(root->left,total+root->val,sum) || total_sum(root->right,total+root->val,sum));
        
        
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
       return total_sum(root,0,sum);
    }
    