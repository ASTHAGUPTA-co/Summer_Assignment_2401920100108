class Solution {
public:
    bool sum(TreeNode* root,int curr,int targetSum){
     if(root==NULL) return false ;
     if(!root->left && !root->right && curr+root->val==targetSum) return true;
     bool lh = sum(root->left,curr+root->val,targetSum);
     bool rh = sum(root->right,curr+root->val,targetSum);
     return  lh||rh;
    }
    bool hasPathSum(TreeNode* root, int targetSum) { 
     return sum(root,0,targetSum);
    }
};
