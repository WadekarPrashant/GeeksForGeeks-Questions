class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
        if(root==NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right) + 1;
    }
// Main function
 bool isBalanced(Node *root)
    {
       if(root==NULL) return true;
       bool leftVal = isBalanced(root->left);
       int heightDifference = abs(height(root->left) - height(root->right));
       if(heightDifference >1) return false;
       bool rightVal = isBalanced(root->right);
       return leftVal && rightVal;
    }
};
