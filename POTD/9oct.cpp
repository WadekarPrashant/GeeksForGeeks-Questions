class Solution{
   public:
   int height(struct Node* root){
       if(root == NULL) return 0;
           
       return 1 + max(height(root->left), height(root->right));
   }
};