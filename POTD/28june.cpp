class Solution{
  public:
    
    int maxDepth(Node *root) {
        // Your code here
        if(root == NULL)
        {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
