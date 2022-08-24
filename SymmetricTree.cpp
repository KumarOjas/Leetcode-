class Solution 

{

public :

  void helper (TreeNode* root)
  
  {
  

if(root==NULL) return;

swap(root->left,root->right);

helper(root->left);

helper(root->right);

}

bool isSame(TreeNode* node1, TreeNode* node2)

{

if(node1==NULL||node2==NULL) return node1==node2;
        
  
  return (node1->val==node2->val && isSame(node1->left,node2->left) && isSame(node1->right,node2->right));
  
  }
    
    bool isSymmetric(TreeNode* root) {
      
      if(root==NULL) return true;
      
      if(root->left==NULL && root->right!=NULL) return false;
      
      if(root->left!=NULL && root->right==NULL) return false;
      
      helper(root->left);
        return isSame(root->left, root->right);
    }
};


