class Solution{
    public:
    
bool isSymmetric(Node * root1, Node * root2) {
  if (root1 == NULL || root2 == NULL)
    return root1 == root2;
  return (root1 -> data == root2 -> data) && isSymmetric(root1 -> left, root2->
  right) && isSymmetric(root1 -> right, root2 -> left);
}
    bool isSymmetric(struct Node* root)
    {
         if (!root) return true;
  return isSymmetric(root -> left, root -> right);
    }
};
