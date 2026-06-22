class Solution {
public:
    int height(TreeNode* root,int &ht){
      if(root==NULL) return 0;
      int leftht = height(root->left,ht);
      int rightht = height(root->right,ht);
      return 1+max(leftht,rightht); 
    }
    int maxDepth(TreeNode* root) {
        int ht = 0;
        return height(root,ht);
    }
};
