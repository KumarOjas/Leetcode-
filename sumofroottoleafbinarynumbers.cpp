class Solution {
  
  
  public :
  
  
  int helper(TreeNode* root, int curr)
  
  {
        if(root==NULL) return 0;
     
    
        curr = curr*2 + root->val;
        
    
    if(root->left==nullptr && root->right==nullptr){
    
      return curr;
      
    }
        
    
    return helper(root->right, curr) + helper(root->left, curr);
    
  }
  
  int sumRootToLeaf(TreeNode* root) {
  
    if(root==NULL) return 0;
    
    int curr=0;
    
    return helper(root, curr);
    }
};
