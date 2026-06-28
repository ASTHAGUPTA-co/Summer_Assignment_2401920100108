class Solution {
public:

    TreeNode* buildTree(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend,unordered_map<int,int>mp) {
      if(prestart>preend|| instart>inend) return NULL;
      TreeNode* root= new TreeNode(preorder[prestart]);
      int inroot = mp[root->val];
      int numsLeft= inroot- instart;
      root->left=buildTree(preorder,prestart+1,prestart+numsLeft,inorder,instart,inroot-1,mp);
      root->right=buildTree(preorder,prestart+numsLeft+1,preend,inorder,inroot+1,inend,mp);
      return root;  
    }
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int,int>mp;
    for(int i=0;i<inorder.size();i++){
        mp[inorder[i]]=i;
    }    
    TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
    return root;
    }
};
