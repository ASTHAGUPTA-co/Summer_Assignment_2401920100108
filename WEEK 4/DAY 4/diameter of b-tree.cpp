class Solution {
public:
    int dia(TreeNode* root,int &mxdia){
        if(root==NULL) return 0;
        int leftht = dia(root->left,mxdia);
        int rightht = dia(root->right,mxdia);
        mxdia = max(mxdia,leftht+rightht);
        return 1+max(leftht,rightht);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int mxdia = INT_MIN;
        dia(root,mxdia);
        return mxdia;
    }
};
