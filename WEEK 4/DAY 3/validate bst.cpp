class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isvalidbst(root,LLONG_MIN,LLONG_MAX);
    }
    bool isvalidbst(TreeNode* root,long long minval,long long maxval){
        if(root==NULL) return true;
        if(root->val>=maxval || root->val<=minval) return false;
        return isvalidbst(root->left,minval,root->val) && isvalidbst(root->right,root->val,maxval);
    }
};
