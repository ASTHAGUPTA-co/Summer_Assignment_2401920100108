class Solution {
public:
    int pathSum(TreeNode* root,int &mxsum){
     if(root==NULL) return 0;
     int left = pathSum(root->left,mxsum);
     int right = pathSum(root->right,mxsum);
     mxsum = max(mxsum,root->val+left+right);
     return max(0,root->val)+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
       int mxsum=INT_MIN;
       pathSum(root,mxsum);
       return mxsum;
    }
};
