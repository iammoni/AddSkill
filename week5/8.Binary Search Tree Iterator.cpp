class BSTIterator {
public:
    
    vector<int> arr;
int i=0;
void fun(TreeNode* root){
    if(!root) return;
    
    fun(root->left);
    arr.push_back(root->val);
    fun(root->right);
}
    BSTIterator(TreeNode* root) {
        fun(root);
    }
    
    int next() {
            int ans=0;
    if(i<arr.size())
    ans=arr[i];
    i++;
    return ans;
    }
    
    bool hasNext() {
        if(i>=arr.size()) return 0;
    return 1;
    }
};